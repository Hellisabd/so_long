/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectible.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:00:43 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/19 15:44:45 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_sword3(t_lo *g)
{
	g->sword.tab_t[6] = mlx_load_png("assets/sword7.png");
	if (!g->sword.tab_t[6])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[6] = mlx_texture_to_image(g->mlx, g->sword.tab_t[6]);
	if (!g->sword.tab_t[6])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[6], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[7] = mlx_load_png("assets/sword8.png");
	if (!g->sword.tab_t[7])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[7] = mlx_texture_to_image(g->mlx, g->sword.tab_t[7]);
	if (!g->sword.tab_t[7])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[7], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[8] = mlx_load_png("assets/sword9.png");
	if (!g->sword.tab_t[8])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[8] = mlx_texture_to_image(g->mlx, g->sword.tab_t[8]);
	if (!g->sword.tab_t[8])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[8], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
}

void	set_sword2(t_lo *g)
{
	g->sword.tab_t[3] = mlx_load_png("assets/sword4.png");
	if (!g->sword.tab_t[3])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[3] = mlx_texture_to_image(g->mlx, g->sword.tab_t[3]);
	if (!g->sword.tab_t[3])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[3], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[4] = mlx_load_png("assets/sword5.png");
	if (!g->sword.tab_t[4])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[4] = mlx_texture_to_image(g->mlx, g->sword.tab_t[4]);
	if (!g->sword.tab_t[4])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[4], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[5] = mlx_load_png("assets/sword6.png");
	if (!g->sword.tab_t[5])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[5] = mlx_texture_to_image(g->mlx, g->sword.tab_t[5]);
	if (!g->sword.tab_t[5])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[5], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	set_sword3(g);
}

void	set_sword1(t_lo *g)
{
	g->sword.tab_t[0] = mlx_load_png("assets/sword1.png");
	if (!g->sword.tab_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[0] = mlx_texture_to_image(g->mlx, g->sword.tab_t[0]);
	if (!g->sword.tab_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[1] = mlx_load_png("assets/sword2.png");
	if (!g->sword.tab_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[1] = mlx_texture_to_image(g->mlx, g->sword.tab_t[1]);
	if (!g->sword.tab_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab_t[2] = mlx_load_png("assets/sword3.png");
	if (!g->sword.tab_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->sword.tab[2] = mlx_texture_to_image(g->mlx, g->sword.tab_t[2]);
	if (!g->sword.tab_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	set_sword2(g);
}

void	set_coll(t_lo *g)
{
	g->sprite.c1_t = mlx_load_png("assets/holy_water.png");
	if (!g->sprite.c1_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), EXIT_FAILURE));
	g->sprite.c1 = mlx_texture_to_image(g->mlx, g->sprite.c1_t);
	if (!g->sprite.c1)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.c1, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
	set_sword1(g);
	g->sprite.c3_t = mlx_load_png("assets/key.png");
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
		g->data_p.weapon++;
	}
	if (g->map[y][x] == 'W')
	{
		g->map[y][x] = '0';
		g->data_p.weapon += 1;
		g->data_p.sword = 1;
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
		mlx_image_to_window(g->mlx, g->sprite.success, 0, 0);
	}
	if ((g->map[y][x] == 'D' && g->data_p.weapon != 2) || g->score.count_move >= 999)
	{
		g->death.death = 1;
		// player_death(g);
		// mlx_close_window((ft_printf("You Died"), g->mlx));
	}
	else if (g->map[y][x] == 'D' && g->data_p.weapon == 2)
	{
		g->ennemie1_alive = 0;
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
