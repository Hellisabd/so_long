/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:53:05 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 17:55:20 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    set_coll(t_lo *g)
{
	g->sprite.c1_t = mlx_load_png("assets/yellow_c.png");
	if (!g->sprite.c1_t)
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c1 = mlx_texture_to_image(g->mlx, g->sprite.c1_t);
	if (!g->sprite.c1)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c1, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
	g->sprite.c2_t = mlx_load_png("assets/green_c.png");
	if (!g->sprite.c2_t)
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c2 = mlx_texture_to_image(g->mlx, g->sprite.c2_t);
	if (!g->sprite.c2)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c2, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
	g->sprite.c3_t = mlx_load_png("assets/green_c.png");
	if (!g->sprite.c3_t)
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c3 = mlx_texture_to_image(g->mlx, g->sprite.c3_t);
	if (!g->sprite.c3)
		exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c3, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));

}

void	check_collectible(t_lo *g)
{
	int x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y][x] == 'S')
	{
		mlx_delete_image((g->count_coll--,g->mlx), g->sprite.c1);
		g->map[y][x] = '0';
	}
	if (g->map[y][x] == 'W')
	{
		mlx_delete_image((g->count_coll--, g->mlx), g->sprite.c2);
		g->map[y][x] = '0';
	}
	if (g->map[y][x] == 'J')
	{
		g->map[y][x] = '0';
		mlx_delete_image((g->count_coll--, g->mlx), g->sprite.c3);
	}
	if (g->map[y][x] == 'e')
		mlx_close_window((ft_printf("SUCCESS"), g->mlx));
	if (g->map[y][x] == 'D')
		mlx_close_window((ft_printf("You Died"), g->mlx));
}

int	integr_coll(t_lo *g)
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
	return (replace);
}
