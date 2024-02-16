/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:35:24 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/16 15:39:35 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	pat_ennemies(t_lo *g, int dir)
{
	int	x;
	int	y;

	x = g->en_x;
	y = g->en_y;
	if (dir == 0 && (g->map[y - 1][x] == '1' /*|| g->map[y - 1][x] == 'W' || g->map[y - 1][x] == 'J' || g->map[y - 1][x] == 'E' || g->map[y - 1][x] == 'e' || g->map[y - 1][x] == 'S'*/))
		return (1);
	else if (dir == 0)
	{
		g->map[y - 1][x] = 'D';
		g->map[y][x] = '0';
		g->en_y = y - 1;
		g->sprite.ennemies->instances[0].y -= g->size_block_y;
	}
	if (dir == 1 && (g->map[y][x + 1] == '1' ||  g->map[y][x + 1] == 'W' || g->map[y][x + 1] == 'J' || g->map[y][x + 1] == 'E' || g->map[y][x + 1] == 'e' || g->map[y][x + 1] == 'S'))
		return (2);
	else if (dir == 1)
	{
		g->map[y][x + 1] = 'D';
		g->map[y][x] = '0';
		g->en_x = x + 1;
		g->sprite.ennemies->instances[0].x += g->size_block_x;
	}
	if ( dir == 2 && (g->map[y][x - 1] == '1' || g->map[y][x - 1] == 'W' || g->map[y][x - 1] == 'J' || g->map[y][x - 1] == 'E' || g->map[y][x - 1] == 'e' || g->map[y][x - 1] == 'S'))
		return (3);
	else if (dir == 2)
	{
		g->map[y][x - 1] = 'D';
		g->map[y][x] = '0';
		g->en_x = x -1;
		g->sprite.ennemies->instances[0].x -= g->size_block_x;
	}
	if (dir == 3 && (g->map[y + 1][x] == '1' || g->map[y + 1][x] == 'W' || g->map[y + 1][x] == 'J' || g->map[y + 1][x] == 'E' || g->map[y + 1][x] == 'e' || g->map[y + 1][x] == 'S'))
		return (0);
	else if (dir == 3)
	{
		g->map[y + 1][x] = 'D';
		g->map[y][x] = '0';
		g->en_y = y + 1;
		g->sprite.ennemies->instances[0].y += g->size_block_y;
	}
	return (dir);
}

void	set_ennemies(t_lo *g)
{
	g->sprite.ennemies_t = mlx_load_png("assets/ennemies.png");
	if (!g->sprite.ennemies_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.ennemies = mlx_texture_to_image(g->mlx, g->sprite.ennemies_t);
	if (!g->sprite.ennemies)
		exit((ft_printf("Error during loading texture to image\n") \
		, EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.ennemies, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing Background\n"), EXIT_FAILURE));
}
