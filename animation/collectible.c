/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectible.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:00:43 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/16 16:11:26 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_lunette(t_lo *g)
{
	g->lun.tab_t[0] = mlx_load_png("assets/lunettes_coll.png");
	if (!g->lun.tab_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->lun.tab[0] = mlx_texture_to_image(g->mlx, g->lun.tab_t[0]);
	if (!g->lun.tab_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->lun.tab_t[1] = mlx_load_png("assets/lunettes_coll1.png");
	if (!g->lun.tab_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->lun.tab[1] = mlx_texture_to_image(g->mlx, g->lun.tab_t[0]);
	if (!g->lun.tab_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->lun.tab_t[2] = mlx_load_png("assets/lunettes_coll2.png");
	if (!g->lun.tab_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->lun.tab[2] = mlx_texture_to_image(g->mlx, g->lun.tab_t[0]);
	if (!g->lun.tab_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
}

void	set_coll(t_lo *g)
{
	g->sprite.c1_t = mlx_load_png("assets/yellow_c.png");
	if (!g->sprite.c1_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c1 = mlx_texture_to_image(g->mlx, g->sprite.c1_t);
	if (!g->sprite.c1)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c1, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
	set_lunette(g);
	g->sprite.c3_t = mlx_load_png("assets/green_c.png");
	if (!g->sprite.c3_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c3 = mlx_texture_to_image(g->mlx, g->sprite.c3_t);
	if (!g->sprite.c3)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c3, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
}

void	check_collectible(t_lo *g)
{
	int	x;
	int	y;

	x = (int)round(g->data_p.player_pos_x / (WIDTH / (g->width - 1)));
	y = (int)round(g->data_p.player_pos_y / (HEIGHT / g->height));
	if (g->map[y][x] == 'S')
	{
		mlx_delete_image((g->count_coll--, g->mlx), g->sprite.c1);
		g->map[y][x] = '0';
	}
	if (g->map[y][x] == 'W')
	{
		g->map[y][x] = '0';
		g->data_p.weapon = 1;
		g->count_coll--;
		mlx_delete_image(g->mlx, g->sprite.player);
		g->sprite.player = mlx_texture_to_image(g->mlx, g->sprite.player_w_t);
		if (!g->sprite.player)
			exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
		if (!mlx_resize_image(g->sprite.player, g->size_block_x, g->size_block_y))
			exit ((ft_printf("Error resizing player\n"), EXIT_FAILURE));
		mlx_image_to_window(g->mlx, g->sprite.player, g->data_p.player_pos_x, g->data_p.player_pos_y);
	}
	if (g->map[y][x] == 'J')
	{
		g->map[y][x] = '0';
		mlx_delete_image((g->count_coll--, g->mlx), g->sprite.c3);
	}
	if (g->map[y][x] == 'e')
	{
		g->success = 1;
		mlx_image_to_window(g->mlx, g->sprite.player, 1000, 1000);
	}
	if (g->map[y][x] == 'D' && g->data_p.weapon == 0)
	{
		mlx_close_window((ft_printf("You Died"), g->mlx));
	}
	else if (g->map[y][x] == 'D' && g->data_p.weapon == 1)
	{
		g->ennemies_alive = 0;
		mlx_delete_image(g->mlx, g->sprite.ennemies);
	}
}

int	replace_coll(t_lo *g, int replace, int y, int x)
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
	return (replace);
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
			replace = replace_coll(g, replace, y, x);
			x++;
			if (replace == 3)
				break ;
		}
		y++;
	}
	return (replace);
}
