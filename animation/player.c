/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:43:30 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/09 17:40:09 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    set_player(t_lo *g)
{
    g->sprite.player_t = mlx_load_png("assets/walk1.png");
    if (!g->sprite.player_t)
        exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
    g->sprite.player = mlx_texture_to_image(g->mlx, g->sprite.player_t);
	if (!g->sprite.player)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
    if (!mlx_resize_image(g->sprite.player, (WIDTH / 21), (HEIGHT / 8.5)))
        exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
    if (-1 == mlx_image_to_window(g->mlx, g->sprite.player, 100, 100))
        exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
    g->data_p.player_size_y = HEIGHT / 8.5;
    g->data_p.player_size_x = WIDTH / 21;
}