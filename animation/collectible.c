/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectible.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:00:43 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:13:12 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_sword3(t_lo *g)
{
	g->sword.tab_t[6] = mlx_load_png("assets/sword7.png");
	if (!g->sword.tab_t[6])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[6] = mlx_texture_to_image(g->mlx, g->sword.tab_t[6]);
	if (!g->sword.tab_t[6])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[6], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	g->sword.tab_t[7] = mlx_load_png("assets/sword8.png");
	if (!g->sword.tab_t[7])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[7] = mlx_texture_to_image(g->mlx, g->sword.tab_t[7]);
	if (!g->sword.tab_t[7])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[7], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	g->sword.tab_t[8] = mlx_load_png("assets/sword9.png");
	if (!g->sword.tab_t[8])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[8] = mlx_texture_to_image(g->mlx, g->sword.tab_t[8]);
	if (!g->sword.tab_t[8])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[8], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
}

void	set_sword2(t_lo *g)
{
	g->sword.tab_t[3] = mlx_load_png("assets/sword4.png");
	if (!g->sword.tab_t[3])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[3] = mlx_texture_to_image(g->mlx, g->sword.tab_t[3]);
	if (!g->sword.tab_t[3])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[3], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	g->sword.tab_t[4] = mlx_load_png("assets/sword5.png");
	if (!g->sword.tab_t[4])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[4] = mlx_texture_to_image(g->mlx, g->sword.tab_t[4]);
	if (!g->sword.tab_t[4])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[4], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
}

void	set_sword1(t_lo *g)
{
	g->sword.tab_t[0] = mlx_load_png("assets/sword1.png");
	if (!g->sword.tab_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[0] = mlx_texture_to_image(g->mlx, g->sword.tab_t[0]);
	if (!g->sword.tab_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	g->sword.tab_t[1] = mlx_load_png("assets/sword2.png");
	if (!g->sword.tab_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[1] = mlx_texture_to_image(g->mlx, g->sword.tab_t[1]);
	if (!g->sword.tab_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	g->sword.tab_t[2] = mlx_load_png("assets/sword3.png");
	if (!g->sword.tab_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), d_a(g), 1));
	g->sword.tab[2] = mlx_texture_to_image(g->mlx, g->sword.tab_t[2]);
	if (!g->sword.tab_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sword.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), d_a(g), 1));
	set_sword2(g);
}

void	set_coll(t_lo *g)
{
	g->sprite.c1_t = mlx_load_png("assets/holy_water.png");
	if (!g->sprite.c1_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), 1));
	g->sprite.c1 = mlx_texture_to_image(g->mlx, g->sprite.c1_t);
	if (!g->sprite.c1)
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sprite.c1, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), d_a(g), 1));
	set_sword1(g);
	g->sprite.c3_t = mlx_load_png("assets/key.png");
	if (!g->sprite.c3_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), 1));
	g->sprite.c3 = mlx_texture_to_image(g->mlx, g->sprite.c3_t);
	if (!g->sprite.c3)
		exit((ft_printf("Error\nloading texture to image\n"), d_a(g), 1));
	if (!mlx_resize_image(g->sprite.c3, g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error resizing collectible\n"), d_a(g), 1));
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
		g->data_p.holy = 1;
		g->map[y][x] = '0';
		g->data_p.weapon++;
	}
	check_collectible1(g, x, y);
	check_collectible2(g, x, y);
}
