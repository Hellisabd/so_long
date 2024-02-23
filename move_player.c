/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:19:38 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:50:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_u(mlx_image_t **tab, t_lo *g)
{
	tab[0]->instances[0].y -= g->size_block_y;
	tab[1]->instances[0].y -= g->size_block_y;
	tab[2]->instances[0].y -= g->size_block_y;
	tab[3]->instances[0].y -= g->size_block_y;
	tab[4]->instances[0].y -= g->size_block_y;
	tab[5]->instances[0].y -= g->size_block_y;
}

void	move_r(mlx_image_t **tab, t_lo *g)
{
	tab[0]->instances[0].x += g->size_block_x;
	tab[1]->instances[0].x += g->size_block_x;
	tab[2]->instances[0].x += g->size_block_x;
	tab[3]->instances[0].x += g->size_block_x;
	tab[4]->instances[0].x += g->size_block_x;
	tab[5]->instances[0].x += g->size_block_x;
}

void	move_l(mlx_image_t **tab, t_lo *g)
{
	tab[0]->instances[0].x -= g->size_block_x;
	tab[1]->instances[0].x -= g->size_block_x;
	tab[2]->instances[0].x -= g->size_block_x;
	tab[3]->instances[0].x -= g->size_block_x;
	tab[4]->instances[0].x -= g->size_block_x;
	tab[5]->instances[0].x -= g->size_block_x;
}

void	move_d(mlx_image_t **tab, t_lo *g)
{
	tab[0]->instances[0].y += g->size_block_y;
	tab[1]->instances[0].y += g->size_block_y;
	tab[2]->instances[0].y += g->size_block_y;
	tab[3]->instances[0].y += g->size_block_y;
	tab[4]->instances[0].y += g->size_block_y;
	tab[5]->instances[0].y += g->size_block_y;
}

void	move_player(t_lo *g, int dir)
{
	if (g->data_p.sword == 0)
	{
		if (dir == 0)
			move_u(g->data_p.tab, g);
		if (dir == 1)
			move_r(g->data_p.tab, g);
		if (dir == 2)
			move_l(g->data_p.tab, g);
		if (dir == 3)
			move_d(g->data_p.tab, g);
	}
	if (g->data_p.sword == 1)
	{
		if (dir == 0)
			move_u(g->data_p.tab_w, g);
		if (dir == 1)
			move_r(g->data_p.tab_w, g);
		if (dir == 2)
			move_l(g->data_p.tab_w, g);
		if (dir == 3)
			move_d(g->data_p.tab_w, g);
	}
}
