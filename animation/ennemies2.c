/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:18:20 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 13:45:42 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	pat_ennemies2(t_lo *g, int dir)
{
	int	x;
	int	y;

	x = g->en2_x;
	y = g->en2_y;
	if (g->success == 1)
		return (-1);
	if (dir == 0 && g->map[y - 1][x] != '0' && g->map[y - 1][x] != 'P')
		return (rand() % 4);
	else if (dir == 0)
	{
		g->map[y - 1][x] = 'H';
		g->map[y][x] = '0';
		g->en2_y = y - 1;
		g->sprite.ennemiesl2->instances[0].y -= g->size_block_y;
		g->sprite.ennemiesr2->instances[0].y -= g->size_block_y;
	}
	if (dir == 1 && g->map[y][x + 1] != '0' && g->map[y][x + 1] != 'P')
		return (rand() % 4);
	else if (dir == 1)
	{
		g->map[y][x + 1] = 'H';
		g->map[y][x] = '0';
		g->en2_x = x + 1;
		g->sprite.ennemiesl2->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr2->instances[0].x += g->size_block_x;
		g->sprite.ennemiesr2->instances->enabled = true;
		g->sprite.ennemiesl2->instances->enabled = false;
	}
	if (dir == 2 && g->map[y][x - 1] != '0' && g->map[y][x - 1] != 'P')
		return (rand() % 4);
	else if (dir == 2)
	{
		g->map[y][x - 1] = 'H';
		g->map[y][x] = '0';
		g->en2_x = x - 1;
		g->sprite.ennemiesr2->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl2->instances[0].x -= g->size_block_x;
		g->sprite.ennemiesl2->instances->enabled = true;
		g->sprite.ennemiesr2->instances->enabled = false;
	}
	if (dir == 3 && g->map[y + 1][x] != '0' && g->map[y + 1][x] != 'P')
		return (rand() % 4);
	else if (dir == 3)
	{
		g->map[y + 1][x] = 'H';
		g->map[y][x] = '0';
		g->en2_y = y + 1;
		g->sprite.ennemiesr2->instances[0].y += g->size_block_y;
		g->sprite.ennemiesl2->instances[0].y += g->size_block_y;
	}
	return (rand() % 4);
}

void	set_ennemies2(t_lo *g)
{
	g->sprite.ennemiesl2_t = mlx_load_png("assets/ennemies_2l.png");
	if (!g->sprite.ennemiesl2_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.ennemiesl2 = mlx_texture_to_image(g->mlx, g->sprite.ennemiesl2_t);
	if (!g->sprite.ennemiesl2)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesl2, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
	g->sprite.ennemiesr2_t = mlx_load_png("assets/ennemies_2r.png");
	if (!g->sprite.ennemiesr2_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.ennemiesr2 = mlx_texture_to_image(g->mlx, g->sprite.ennemiesr2_t);
	if (!g->sprite.ennemiesr2)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemiesr2, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
}