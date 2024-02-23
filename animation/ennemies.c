/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:35:24 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:49:04 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	pat_ennemies1_extend(t_lo *g, int dir, int x, int y)
{
	if (dir == 1 && g->map[y][x + 1] != '0' && g->map[y][x + 1] != 'P')
		return ;
	else if (dir == 1)
	{
		g->map[y][x + 1] = 'D';
		g->map[y][x] = '0';
		g->en1_x = x + 1;
		g->sprite.ennemiesl1->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr1->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr1->instances->enabled = true;
		g->sprite.ennemiesl1->instances->enabled = false;
	}
}

void	pat_ennemies1_ext(t_lo *g, int dir, int x, int y)
{
	if (dir == 2 && g->map[y][x - 1] != '0' && g->map[y][x - 1] != 'P')
		return ;
	else if (dir == 2)
	{
		g->map[y][x - 1] = 'D';
		g->map[y][x] = '0';
		g->en1_x = x - 1;
		g->sprite.ennemiesr1->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl1->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl1->instances->enabled = true;
		g->sprite.ennemiesr1->instances->enabled = false;
	}
	if (dir == 3 && g->map[y + 1][x] != '0' && g->map[y + 1][x] != 'P')
		return ;
	else if (dir == 3)
	{
		g->map[y + 1][x] = 'D';
		g->map[y][x] = '0';
		g->en1_y = y + 1;
		g->sprite.ennemiesr1->instances[0].y += g->size_block_y;
		g->sprite.ennemiesl1->instances[0].y += g->size_block_y;
	}
}

int	pat_ennemies1(t_lo *g, int dir)
{
	int	x;
	int	y;

	x = g->en1_x;
	y = g->en1_y;
	if (g->success == 1)
		return (-1);
	if (dir == 0 && g->map[y - 1][x] != '0' && g->map[y - 1][x] != 'P')
		return (rand() % 4);
	else if (dir == 0)
	{
		g->map[y - 1][x] = 'D';
		g->map[y][x] = '0';
		g->en1_y = y - 1;
		g->sprite.ennemiesl1->instances[0].y -= g->size_block_y;
		g->sprite.ennemiesr1->instances[0].y -= g->size_block_y;
	}
	pat_ennemies1_extend(g, dir, x, y);
	pat_ennemies1_ext(g, dir, x, y);
	return (rand() % 4);
}

void	set_ennemies(t_lo *g)
{
	g->sprite.ennemiesl1_t = mlx_load_png("assets/wolf_walk1.png");
	if (!g->sprite.ennemiesl1_t)
		exit ((ft_printf("Error loading PNG\n"), d_a(g), EXIT_FAILURE));
	g->sprite.ennemiesl1 = mlx_texture_to_image(g->mlx, g->sprite.ennemiesl1_t);
	if (!g->sprite.ennemiesl1)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesl1, \
	g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), d_a(g), EXIT_FAILURE));
	g->sprite.ennemiesr1_t = mlx_load_png("assets/wolf_walk2.png");
	if (!g->sprite.ennemiesr1_t)
		exit ((ft_printf("Error loading PNG\n"), d_a(g), EXIT_FAILURE));
	g->sprite.ennemiesr1 = mlx_texture_to_image(g->mlx, g->sprite.ennemiesr1_t);
	if (!g->sprite.ennemiesr1)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesr1, \
	g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), d_a(g), EXIT_FAILURE));
	set_ennemies2(g);
}
