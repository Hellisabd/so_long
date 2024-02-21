/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:38:33 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 13:57:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"



void	aff_all(t_lo *g, int x, int y)
{
	while (g->map[g->y][g->x])
	{
		if (g->map[g->y][g->x] == '1')
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.wall, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
		if (g->map[g->y][g->x] == 'P')
		{
			aff_player(g, x, y);
		}
		if (g->map[g->y][g->x] == 'S')
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.c1, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
		if (g->map[g->y][g->x] == 'W')
		{
			aff_player_w(g, x, y);
			g->sword.x = x;
			g->sword.y = y;
		}
		if (g->map[g->y][g->x] == 'J')
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.c3, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
		if (g->map[g->y][g->x] == 'D')
		{
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.ennemiesr1, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.ennemiesl1, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
			g->sprite.ennemiesl1->instances->enabled = false;
			g->en1_x = g->x;
			g->en1_y = g->y;
		}
		if (g->map[g->y][g->x] == 'H')
		{
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.ennemiesr2, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
			if (-1 == mlx_image_to_window(g->mlx, g->sprite.ennemiesl2, x, y))
				exit ((destroy_all(g), ft_printf("Error\nimage to window\n", 1)));
			g->sprite.ennemiesl2->instances->enabled = false;
			g->en2_x = g->x;
			g->en2_y = g->y;
		}
		x += g->size_block_x;
		g->x++;
	}
}

void	set_walls(t_lo *g)
{
	int		pos_x;
	int		pos_y;

	pos_y = 0;
	g->y = 0;
	g->sprite.wall_t = mlx_load_png("assets/wall.png");
	if (!g->sprite.wall_t)
		exit ((ft_printf("Error\nloading PNG\n"), EXIT_FAILURE));
	g->sprite.wall = mlx_texture_to_image(g->mlx, g->sprite.wall_t);
	if (!g->sprite.wall)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.wall, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing walls\n"), EXIT_FAILURE));
	while (g->map[g->y])
	{
		g->x = 0;
		pos_x = 0;
		aff_all(g, pos_x, pos_y);
		g->y++;
		pos_y += g->size_block_y;
	}
}
