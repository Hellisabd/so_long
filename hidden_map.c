/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidden_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:45 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/13 16:34:13 by bgrosjea         ###   ########.fr       */
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

void    get_sprite_pos(t_lo *g, char c)
{
	int	tmp_x;

	while (g->h_m.start_y < g->h_m.end_y && g->h_m.hidden_map[g->h_m.start_y])
	{
		tmp_x = g->h_m.start_x;
		while (tmp_x < g->h_m.end_x && g->h_m.hidden_map[g->h_m.start_y][tmp_x])
		{
			g->h_m.hidden_map[g->h_m.start_y][tmp_x] = c;
			tmp_x++;
		}
		g->h_m.start_y++;
	}
}

void    get_sprite_pos_coll(t_lo *g, char replace, t_coll *coll, char find)
{
	int	tmp_x;

	// printf("%d\n%d\n%d\n%d\n", coll->end_y, coll->start_y, coll->end_x, coll->start_x);
	while (coll->start_y < coll->end_y && g->h_m.hidden_map[coll->start_y])
	{
		tmp_x = coll->start_x;
		while (tmp_x < coll->end_x && g->h_m.hidden_map[coll->start_y][tmp_x])
		{
			if (g->h_m.hidden_map[coll->start_y][tmp_x] == find)
				g->h_m.hidden_map[coll->start_y][tmp_x] = replace;
			tmp_x++;
		}
		coll->start_y++;
	}
}