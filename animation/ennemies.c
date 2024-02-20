/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:35:24 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/20 17:06:05 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	pat_ennemies1(t_lo *g)
{
	int	x;
	int	y;

	x = g->en_x;
	dir = rand();
	ft_printf("%d", dir % 4);
	if (g->success == 1)
		return (0);
	y = g->en_y;
	if (dir % 4 == 0 && (g->map[y - 1][x] == '1' || g->map[y - 1][x] == 'W' || g->map[y - 1][x] == 'J' || g->map[y - 1][x] == 'E' || g->map[y - 1][x] == 'e' || g->map[y - 1][x] == 'S'))
		return (1);
	else if (dir % 4 == 0)
	{
		g->map[y - 1][x] = 'D';
		g->map[y][x] = '0';
		g->en_y = y - 1;
		g->sprite.ennemiesl->instances[0].y -= g->size_block_y;
		g->sprite.ennemiesr->instances[0].y -= g->size_block_y;
	}
	if (dir % 4 == 1 && (g->map[y][x + 1] == '1' ||  g->map[y][x + 1] == 'W' || g->map[y][x + 1] == 'J' || g->map[y][x + 1] == 'E' || g->map[y][x + 1] == 'e' || g->map[y][x + 1] == 'S'))
		return (2);
	else if (dir % 4 == 1)
	{
		g->map[y][x + 1] = 'D';
		g->map[y][x] = '0';
		g->en_x = x + 1;
		g->sprite.ennemiesl->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr->instances->enabled = true;
		g->sprite.ennemiesl->instances->enabled = false;
	}
	if (dir % 4 == 2 && (g->map[y][x - 1] == '1' || g->map[y][x - 1] == 'W' || g->map[y][x - 1] == 'J' || g->map[y][x - 1] == 'E' || g->map[y][x - 1] == 'e' || g->map[y][x - 1] == 'S'))
		return (3);
	else if (dir % 4 == 2)
	{
		g->map[y][x - 1] = 'D';
		g->map[y][x] = '0';
		g->en_x = x - 1;
		g->sprite.ennemiesr->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl->instances->enabled = true;
		g->sprite.ennemiesr->instances->enabled = false;
	}
	if (dir % 4 == 3 && (g->map[y + 1][x] == '1' || g->map[y + 1][x] == 'W' || g->map[y + 1][x] == 'J' || g->map[y + 1][x] == 'E' || g->map[y + 1][x] == 'e' || g->map[y + 1][x] == 'S'))
		return (0);
	else if (dir % 4 == 3)
	{
		g->map[y + 1][x] = 'D';
		g->map[y][x] = '0';
		g->en_y = y + 1;
		g->sprite.ennemiesr->instances[0].y += g->size_block_y;
		g->sprite.ennemiesl->instances[0].y += g->size_block_y;
	}
	return (dir);
}

void	set_ennemies(t_lo *g)
{
	g->sprite.ennemiesl_t = mlx_load_png("assets/wolf_walk1.png");
	if (!g->sprite.ennemiesl_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.ennemiesl = mlx_texture_to_image(g->mlx, g->sprite.ennemiesl_t);
	if (!g->sprite.ennemiesl)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesl, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
	g->sprite.ennemiesr_t = mlx_load_png("assets/wolf_walk2.png");
	if (!g->sprite.ennemiesr_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.ennemiesr = mlx_texture_to_image(g->mlx, g->sprite.ennemiesr_t);
	if (!g->sprite.ennemiesr)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesr, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
}
