/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:23:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 10:42:10 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	check_collosion_up(t_lo *g)
{
	int	x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y - 1][x] == '1')
		return (false);
	return (true);
}

bool	check_collosion_down(t_lo *g)
{
	int	x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y + 1][x] == '1')
		return (false);
	return (true);
}

bool	check_collosion_right(t_lo *g)
{
	int	x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y][x + 1] == '1')
		return (false);
	return (true);
}

bool	check_collosion_left(t_lo *g)
{
	int	x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y][x - 1] == '1')
		return (false);
	return (true);
}
