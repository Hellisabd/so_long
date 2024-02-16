/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:43:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/16 17:32:18 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_player(t_lo *g)
{
	g->sprite.player_t = mlx_load_png("assets/player.png");
	if (!g->sprite.player_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.player = mlx_texture_to_image(g->mlx, g->sprite.player_t);
	if (!g->sprite.player)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.player, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
	g->sprite.player_w_t = mlx_load_png("assets/player_weapon.png");
	if (!g->sprite.player_w_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
}

void	set_success(t_lo *g)
{
	g->sprite.success_t = mlx_load_png("assets/success.png");
	if (!g->sprite.success_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.success = mlx_texture_to_image(g->mlx, g->sprite.success_t);
	if (!g->sprite.success)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
}
