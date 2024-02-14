/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:38:33 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 14:26:15 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    set_walls(t_lo *g)
{
	int	pos_x;
	int	pos_y;

	pos_y = 0;
	g->y = 0;
	g->sprite.wall_t = mlx_load_png("assets/blue_c.png");
	if (!g->sprite.wall_t)
        exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.wall = mlx_texture_to_image(g->mlx, g->sprite.wall_t);
	if (!g->sprite.wall)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.wall,  g->size_block_x, g->size_block_y))
        exit ((ft_printf("Error resizing walls\n"), EXIT_FAILURE));
	while (g->map[g->y])
	{
		g->x = 0;
		pos_x = 0;
		while (g->map[g->y][g->x])
		{
			if (g->map[g->y][g->x] == '1')
			{
				if (-1 == mlx_image_to_window(g->mlx, g->sprite.wall, pos_x, pos_y))
					exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
			}
			pos_x += g->size_block_x;
			g->x++;
		}
		g->y++;
		pos_y += g->size_block_y;
	}
}
