/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidden_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:45 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/10 12:01:47 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    hidden_map(t_lo *g)
{
	int i;

	i = 0;
	g->h_m.hidden_map = malloc(sizeof (int *) * (HEIGHT + 1));
	while (i <= HEIGHT)
	{
		g->h_m.hidden_map[i] = ft_calloc(4, WIDTH);
		i++;
	}
}

void    get_sprite_pos(t_lo *g)
{
	int	tmp_x;


	// ft_printf("contentu :%d\n start y : %d\n start x : %d\nend x : %d\n end y : %d\n, ", g->h_m.hidden_map[g->h_m.start_y][g->h_m.start_x], g->h_m.start_y, g->h_m.start_x, g->h_m.end_x, g->h_m.end_y);
	while (g->h_m.start_y < g->h_m.end_y)
	{
		tmp_x = g->h_m.start_x;
		while (tmp_x < g->h_m.end_x && g->h_m.hidden_map[g->h_m.start_y])
		{
			g->h_m.hidden_map[g->h_m.start_y][tmp_x] = 1;
			// ft_printf("%d\n", g->h_m.hidden_map[g->h_m.start_y][tmp_x]);
			tmp_x++;
		}
		g->h_m.start_y++;
	}
}