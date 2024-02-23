/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:37:17 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 14:14:25 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_player_w(t_lo *g)
{
	g->data_p.tab_w_t[0] = mlx_load_png("assets/player_w1.png");
	if (!g->data_p.tab_w_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[0] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[0]);
	if (!g->data_p.tab_w_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w_t[1] = mlx_load_png("assets/player_w2.png");
	if (!g->data_p.tab_w_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[1] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[1]);
	if (!g->data_p.tab_w_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), EXIT_FAILURE));
	set_player_w1(g);
}

void	aff_player(t_lo *g, int x, int y)
{
	mlx_image_to_window(g->mlx, g->data_p.tab[0], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab[1], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab[2], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab[3], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab[4], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab[5], x, y);
	g->data_p.player_pos_x = x;
	g->data_p.player_pos_y = y;
	g->data_p.tab[0]->instances->enabled = true;
	g->data_p.tab[1]->instances->enabled = false;
	g->data_p.tab[2]->instances->enabled = false;
	g->data_p.tab[3]->instances->enabled = false;
	g->data_p.tab[4]->instances->enabled = false;
	g->data_p.tab[5]->instances->enabled = false;
}

void	aff_player_w(t_lo *g, int x, int y)
{
	mlx_image_to_window(g->mlx, g->data_p.tab_w[0], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab_w[1], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab_w[2], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab_w[3], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab_w[4], x, y);
	mlx_image_to_window(g->mlx, g->data_p.tab_w[5], x, y);
	g->data_p.tab_w[0]->instances->enabled = false;
	g->data_p.tab_w[1]->instances->enabled = false;
	g->data_p.tab_w[2]->instances->enabled = false;
	g->data_p.tab_w[3]->instances->enabled = false;
	g->data_p.tab_w[4]->instances->enabled = false;
	g->data_p.tab_w[5]->instances->enabled = false;
}

void	player_anim(t_lo *g)
{
	if (g->data_p.frame == 0)
		g->data_p.tab[5]->instances->enabled = false;
	else
		g->data_p.tab[g->data_p.frame - 1]->instances->enabled = false;
	g->data_p.tab[g->data_p.frame]->instances->enabled = true;
	g->data_p.frame++;
	if (g->data_p.frame == 6)
		g->data_p.frame = 0;
}

void	player_anim_w(t_lo *g)
{
	if (g->data_p.frame == 0)
		g->data_p.tab_w[5]->instances->enabled = false;
	else
		g->data_p.tab_w[g->data_p.frame - 1]->instances->enabled = false;
	g->data_p.tab_w[g->data_p.frame]->instances->enabled = true;
	g->data_p.frame++;
	if (g->data_p.frame == 6)
		g->data_p.frame = 0;
}
