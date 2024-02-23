/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_w2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:12:12 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 14:13:42 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_player_w2(t_lo *g)
{
	g->data_p.tab_w_t[4] = mlx_load_png("assets/player_w5.png");
	if (!g->data_p.tab_w_t[4])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[4] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[4]);
	if (!g->data_p.tab_w_t[4])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[4], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w_t[5] = mlx_load_png("assets/player_w6.png");
	if (!g->data_p.tab_w_t[5])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[5] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[5]);
	if (!g->data_p.tab_w_t[5])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[5], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), EXIT_FAILURE));
}

void	set_player_w1(t_lo *g)
{
	g->data_p.tab_w_t[2] = mlx_load_png("assets/player_w3.png");
	if (!g->data_p.tab_w_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[2] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[2]);
	if (!g->data_p.tab_w_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[2], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w_t[3] = mlx_load_png("assets/player_w4.png");
	if (!g->data_p.tab_w_t[3])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->data_p.tab_w[3] = mlx_texture_to_image(g->mlx, g->data_p.tab_w_t[3]);
	if (!g->data_p.tab_w_t[3])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab_w[3], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	set_player_w2(g);
}
