/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   background.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:30:37 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/12 14:18:27 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    set_background(t_lo *g)
{
    g->sprite.back_t = mlx_load_png("assets/Background.png");
    if (!g->sprite.back_t)
        exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
    g->sprite.background = mlx_texture_to_image(g->mlx, g->sprite.back_t);
	if (!g->sprite.background)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
    if (!mlx_resize_image(g->sprite.background, WIDTH + 75, HEIGHT + 75))
        exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
    if (-1 == mlx_image_to_window(g->mlx, g->sprite.background, 0, 0))
        exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
}