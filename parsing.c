/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:18:50 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/06 18:01:50 by bgrosjea         ###   ########.fr       */
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

int	check_valid_exit(t_lo *g)
{
	get_p_and_e_pos(g);
	// find_exit(g, )
	return (0);
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

