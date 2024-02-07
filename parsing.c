/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:18:50 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/07 11:43:18 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_p_and_e_pos(t_lo *g)
{
	g->y = 0;
	while (g->map[g->y])
	{
		g->x = 0;
		while (g->map[g->y][g->x] != '\0')
		{
			if (g->map[g->y][g->x] == 'P')
			{
				g->p_x = g->x;
				g->p_y = g->y;
			}
			if (g->map[g->y][g->x] == 'E')
			{
				g->e_x = g->x;
				g->e_y = g->y;
			}
			g->x++;
		}
		g->y++;
	}
}

bool	verif(t_lo *g)
{
	int	x;
	int	y;

	y = 0;
	while (g->map[y])
	{
		x = 0;
		while (g->map[y][x])
		{
			if ((g->map[y][x] == 'P' || g->map[y][x] == 'X')
				&& (g->map[y][x + 1] == 'Y' || g->map[y][x - 1] == 'Y'
				|| g->map[y + 1][x] == 'Y' || g->map[y - 1][x] == 'Y'
				|| g->map[y][x + 1] == 'E' || g->map[y][x - 1] == 'E'
				|| g->map[y + 1][x] == 'E' || g->map[y - 1][x] == 'E'))
				return (true);
			x++;
		}
		y++;
	}
	return (false);
}

bool	find_exit(t_lo *g)
{
	while (!check_c_left(g, '0'))
	{
		g->y = 0;
		while (g->map[g->y])
		{
			g->x = -1;
			while (g->map[g->y][++g->x])
			{
				spread_x(g);
				spread_y(g);
			}
			g->y++;
		}
	}
	if (!check_c_left2(g, 'C'))
		exit((ft_free_tab(g->map), \
		ft_printf("Error\nCan't reach all the collectible\n"), 1));
	if (verif(g))
		return (ft_printf("Exit found\n"), true);
	return (false);
}

void	check_valid_exit(t_lo *g)
{
	get_p_and_e_pos(g);
	if (!find_exit(g))
		exit((ft_free_tab(g->map), ft_printf("Error\nCan't reach the exit"), 1));
}

int	check_infos(t_lo *g)
{
	g->y = 0;
	while (g->map[g->y])
	{
		g->x = -1;
		while (g->map[g->y][++g->x])
		{
			if (g->map[g->y][g->x] == 'P' && g->player == 1)
				return (-1);
			if (g->map[g->y][g->x] == 'P' && g->player == 0)
				g->player = 1;
			if (g->map[g->y][g->x] == 'E' && g->exit == 1)
				return (-1);
			if (g->map[g->y][g->x] == 'E' && g->exit == 0)
				g->exit = 1;
			if (g->map[g->y][g->x] == 'C')
				g->coll++;
			if (g->map[g->y][g->x] != 'P' && g->map[g->y][g->x] != 'E'
				&& g->map[g->y][g->x] != '1' && g->map[g->y][g->x] != '0'
				&& g->map[g->y][g->x] != 'C' && g->map[g->y][g->x] != '\0'
				&& g->map[g->y][g->x] != '\n')
				return (-1);
		}
		g->y++;
	}
	return (0);
}
