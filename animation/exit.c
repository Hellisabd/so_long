/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:22:51 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:44:29 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_exit(t_lo *g)
{
	g->sprite.exit_t = mlx_load_png("assets/exit.png");
	if (!g->sprite.exit_t)
		exit ((ft_printf("Error loading PNG\n"), d_a(g), EXIT_FAILURE));
	g->sprite.exit = mlx_texture_to_image(g->mlx, g->sprite.exit_t);
	if (!g->sprite.exit)
		exit((ft_printf("Error during loading texture to image\n"), \
		EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.exit, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), d_a(g), EXIT_FAILURE));
}

void	aff_exit(t_lo *g)
{
	int	pos_x;
	int	pos_y;

	pos_y = 0;
	g->y = 0;
	while (g->map[g->y])
	{
		g->x = 0;
		pos_x = 0;
		while (g->map[g->y][g->x])
		{
			if (g->map[g->y][g->x] == 'E')
			{
				if (-1 == mlx_image_to_window(g->mlx, g->sprite.exit, \
				pos_x, pos_y))
					exit ((d_a(g), ft_printf("Error during passing \
					image to window\n", 1)));
				g->map[g->y][g->x] = 'e';
			}
			pos_x += g->size_block_x;
			g->x++;
		}
		g->y++;
		pos_y += g->size_block_y;
	}
}
