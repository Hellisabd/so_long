/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:35:24 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 17:38:42 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    set_ennemies(t_lo *g)
{
    g->sprite.ennemies_t = mlx_load_png("assets/ennemies.png");
    if (!g->sprite.ennemies_t)
        exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
    g->sprite.ennemies = mlx_texture_to_image(g->mlx, g->sprite.ennemies_t);
	if (!g->sprite.ennemies)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
    if (!mlx_resize_image(g->sprite.ennemies, g->size_block_x, g->size_block_y))
        exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
}