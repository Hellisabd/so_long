/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:43:02 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 16:42:01 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	file_validity(char *file)
{
	int	i;

	i = 0;
	while (file[i])
		i++;
	if (file[i - 1] != 'r')
		return (false);
	if (file[i - 2] != 'e')
		return (false);
	if (file[i - 3] != 'b')
		return (false);
	if (file[i - 4] != '.')
		return (false);
	return (true);
}

void	find_exit2(t_lo *g)
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
	if (!check_c_left2(g, 'C'))
		exit((ft_free_tab(g->map), \
		ft_printf("Error\nCan't reach all the collectible\n"), 1));
	if (!check_c_left2(g, 'H'))
		exit((ft_free_tab(g->map), \
		ft_printf("Error\nCan't reach all the collectible1\n"), 1));
	if (!check_c_left2(g, 'D'))
		exit((ft_free_tab(g->map), \
		ft_printf("Error\nCan't reach all the collectible2\n"), 1));
}

int	check_infos2(t_lo *g)
{
	if (g->map[g->y][g->x] == 'D' && g->ennemie1_alive == 1)
		exit((ft_free_tab(g->map), ft_printf("Error\nToo many ennemies"), 1));
	if (g->map[g->y][g->x] == 'D')
		g->ennemie1_alive = 1;
	if (g->map[g->y][g->x] == 'H' && g->ennemie2_alive == 1)
		exit((ft_free_tab(g->map), ft_printf("Error\nToo many ennemies"), 1));
	if (g->map[g->y][g->x] == 'H')
		g->ennemie2_alive = 1;
	if (g->map[g->y][g->x] == 'H')
		g->ennemie2_alive = 1;
	if (g->map[g->y][g->x] != 'P' && g->map[g->y][g->x] != 'E'
		&& g->map[g->y][g->x] != '1' && g->map[g->y][g->x] != '0'
		&& g->map[g->y][g->x] != 'C' && g->map[g->y][g->x] != '\0'
		&& g->map[g->y][g->x] != '\n' && g->map[g->y][g->x] != 'D'
		&& g->map[g->y][g->x] != 'H')
		return (-1);
	return (0);
}
