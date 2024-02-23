/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:42:34 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:46:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	delete_c(t_lo *g)
{
	g->map[g->del.y][g->del.x] = '0';
}

void	d_a11(t_lo *g)
{
	mlx_delete_image(g->mlx, g->score.ss7);
	mlx_delete_image(g->mlx, g->score.ss8);
	mlx_delete_image(g->mlx, g->score.ss9);
	mlx_delete_image(g->mlx, g->score.ts0);
	mlx_delete_image(g->mlx, g->score.ts1);
	mlx_delete_image(g->mlx, g->score.ts2);
	mlx_delete_image(g->mlx, g->score.ts3);
	mlx_delete_image(g->mlx, g->score.ts4);
	mlx_delete_image(g->mlx, g->score.ts5);
	mlx_delete_image(g->mlx, g->score.ts6);
	mlx_delete_image(g->mlx, g->score.ts7);
	mlx_delete_image(g->mlx, g->score.ts8);
	mlx_delete_image(g->mlx, g->score.ts9);
}

void	d_a10(t_lo *g)
{
	mlx_delete_image(g->mlx, g->score.fs0);
	mlx_delete_image(g->mlx, g->score.fs1);
	mlx_delete_image(g->mlx, g->score.fs2);
	mlx_delete_image(g->mlx, g->score.fs3);
	mlx_delete_image(g->mlx, g->score.fs4);
	mlx_delete_image(g->mlx, g->score.fs5);
	mlx_delete_image(g->mlx, g->score.fs6);
	mlx_delete_image(g->mlx, g->score.fs7);
	mlx_delete_image(g->mlx, g->score.fs8);
	mlx_delete_image(g->mlx, g->score.fs9);
	mlx_delete_image(g->mlx, g->score.ss0);
	mlx_delete_image(g->mlx, g->score.ss1);
	mlx_delete_image(g->mlx, g->score.ss2);
	mlx_delete_image(g->mlx, g->score.ss3);
	mlx_delete_image(g->mlx, g->score.ss4);
	mlx_delete_image(g->mlx, g->score.ss5);
	mlx_delete_image(g->mlx, g->score.ss6);
	d_a11(g);
}

void	d_a4(t_lo *g)
{
	if (g->sword.tab_t[0])
		mlx_delete_texture(g->sword.tab_t[0]);
	if (g->sword.tab_t[1])
		mlx_delete_texture(g->sword.tab_t[1]);
	if (g->sword.tab_t[2])
		mlx_delete_texture(g->sword.tab_t[2]);
	if (g->sword.tab_t[3])
		mlx_delete_texture(g->sword.tab_t[3]);
	if (g->sword.tab_t[4])
		mlx_delete_texture(g->sword.tab_t[4]);
	if (g->data_p.tab_t[0])
		mlx_delete_texture(g->data_p.tab_t[0]);
	if (g->data_p.tab_t[1])
		mlx_delete_texture(g->data_p.tab_t[1]);
	if (g->data_p.tab_t[2])
		mlx_delete_texture(g->data_p.tab_t[2]);
	if (g->data_p.tab_t[3])
		mlx_delete_texture(g->data_p.tab_t[3]);
	d_a5(g);
}
