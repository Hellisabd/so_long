/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidden_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:45 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/12 13:16:38 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    hidden_map(t_lo *g)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	g->h_m.hidden_map = malloc(sizeof(char *) * (HEIGHT + 1));
	if (!g->h_m.hidden_map)
		exit (ft_printf("Error malloc"));
	while (i < HEIGHT)
	{
		j = 0;
		g->h_m.hidden_map[i] = malloc(sizeof(char) * (WIDTH + 1));
		while (j < WIDTH)
		{
			g->h_m.hidden_map[i][j] = '0';
			j++;
		}
		g->h_m.hidden_map[i][j] = '\0';
		i++;
	}
	g->h_m.hidden_map[i] = NULL;
}

void    get_sprite_pos(t_lo *g)
{
	int	tmp_x;

	while (g->h_m.start_y < g->h_m.end_y && g->h_m.hidden_map[g->h_m.start_y])
	{
		tmp_x = g->h_m.start_x;
		while (tmp_x < g->h_m.end_x && g->h_m.hidden_map[g->h_m.start_y][tmp_x])
		{
			g->h_m.hidden_map[g->h_m.start_y][tmp_x] = '1';
			tmp_x++;
		}
		g->h_m.start_y++;
	}
}