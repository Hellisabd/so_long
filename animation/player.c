/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:43:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:46:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_player2(t_lo *g)
{
	g->data_p.tab_t[2] = mlx_load_png("assets/player3.png");
	if (!g->data_p.tab_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[2] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[2]);
	if (!g->data_p.tab_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[2], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab_t[5] = mlx_load_png("assets/player6.png");
	if (!g->data_p.tab_t[5])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[5] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[5]);
	if (!g->data_p.tab_t[5])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[5], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
}

void	set_player1(t_lo *g)
{
	g->data_p.tab_t[3] = mlx_load_png("assets/player4.png");
	if (!g->data_p.tab_t[3])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[3] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[3]);
	if (!g->data_p.tab_t[3])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[3], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab_t[4] = mlx_load_png("assets/player5.png");
	if (!g->data_p.tab_t[4])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[4] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[4]);
	if (!g->data_p.tab_t[4])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[4], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
	set_player2(g);
}

void	set_player(t_lo *g)
{
	g->data_p.tab_t[0] = mlx_load_png("assets/player1.png");
	if (!g->data_p.tab_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[0] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[0]);
	if (!g->data_p.tab_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab_t[1] = mlx_load_png("assets/player2.png");
	if (!g->data_p.tab_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), \
		d_a(g), EXIT_FAILURE));
	g->data_p.tab[1] = mlx_texture_to_image(g->mlx, g->data_p.tab_t[1]);
	if (!g->data_p.tab_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->data_p.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), \
		d_a(g), EXIT_FAILURE));
	set_player1(g);
}

void	set_success(t_lo *g)
{
	g->sprite.success_t = mlx_load_png("assets/success.png");
	if (!g->sprite.success_t)
		exit ((ft_printf("Error loading PNG\n"), d_a(g), EXIT_FAILURE));
	g->sprite.success = mlx_texture_to_image(g->mlx, g->sprite.success_t);
	if (!g->sprite.success)
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
}
