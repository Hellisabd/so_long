/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:53:05 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 14:26:49 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    set_coll(t_lo *g)
{
	int		pos_x;
	int		pos_y;

	pos_y = 0;
	g->x = 1;
	g->y = 1;
	while (g->y < (size_t)g->height - 1 && g->map[g->y])
	{
		pos_x = g->size_block_x;
		g->x = 1;
		while (g->x < (size_t)g->width - 2)
		{
			if (g->nb_coll == 0)
				g->aff_coll = g->coll1;
			if (g->nb_coll == 1)
				g->aff_coll = g->coll2;
			if (g->nb_coll == 2)
				g->aff_coll = g->coll3;
			if (g->map[g->y][g->x] == g->aff_coll.c && g->map[g->y][g->x])
			{
				g->sprite.c_speed_t = mlx_load_png(g->aff_coll.path);
				if (!g->sprite.c_speed_t)
					exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
				g->sprite.c_speed = mlx_texture_to_image(g->mlx, g->sprite.c_speed_t);
				if (!g->sprite.c_speed)
					exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
				if (!mlx_resize_image(g->sprite.wall, g->size_block_x, g->size_block_y))
					exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
				if (-1 == mlx_image_to_window(g->mlx, g->sprite.c_speed, pos_x, pos_y))
					exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
				// get_sprite_pos_coll(g, g->aff_coll.c, &g->aff_coll, '0');
				g->nb_coll++;
			}
			pos_x += g->size_block_x;
			g->x++;
		}
		g->y++;
		pos_y += g->size_block_y;
	}
	g->y = 0;
	while (g->map[g->y])
	{
		printf("%s", g->map[g->y]);
		g->y++;
	}
}

void	integr_coll(t_lo *g)
{
	int		x;
	int		y;
	int		replace;

	y = 1;
	replace = 0;
	while (g->map[y])
	{
		x = 1;
		while (g->map[y][x])
		{
			if (g->map[y][x] == 'C' && replace == 0)
			{
				g->map[y][x] = 'S';
				replace++;
			}
			if (g->map[y][x] == 'C' && replace == 1)
			{
				g->map[y][x] = 'W';
				replace++;
			}
			if (g->map[y][x] == 'C' && replace == 2)
			{
				g->map[y][x] = 'J';
				replace++;
			}
			x++;
			if (replace == 3)
				break ;
		}
		y++;
	}
}
