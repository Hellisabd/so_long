/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:04:18 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/20 16:50:19 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    swords_img2(t_lo *g)
{
	if (!mlx_resize_image(g->sword.tab[4], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab[5] = mlx_texture_to_image(g->mlx, g->sword.tab_t[0]);
	if (!g->sword.tab[5])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[5], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
}

void    swords_img1(t_lo *g)
{
	g->sword.tab[0] = mlx_texture_to_image(g->mlx, g->sword.tab_t[0]);
	if (!g->sword.tab[0])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab[1] = mlx_texture_to_image(g->mlx, g->sword.tab_t[1]);
	if (!g->sword.tab[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab[2] = mlx_texture_to_image(g->mlx, g->sword.tab_t[2]);
	if (!g->sword.tab[2])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[2], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab[3] = mlx_texture_to_image(g->mlx, g->sword.tab_t[3]);
	if (!g->sword.tab[3])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[3], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
	g->sword.tab[4] = mlx_texture_to_image(g->mlx, g->sword.tab_t[4]);
	if (!g->sword.tab[4])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	swords_img2(g);
}

void    swords(t_lo *g)
{
	int i;

	i = 0;
	if (g->sword.frame2 == 1)
	{
		g->sword.frame1 = 0;
		g->sword.frame2 = 5;
	}
	if (g->sword.frame1 == 5)
		i = 1;
	mlx_delete_image(g->mlx, g->sword.tab[0]);
	mlx_delete_image(g->mlx, g->sword.tab[1]);
	mlx_delete_image(g->mlx, g->sword.tab[2]);
	mlx_delete_image(g->mlx, g->sword.tab[3]);
	mlx_delete_image(g->mlx, g->sword.tab[4]);
	mlx_delete_image(g->mlx, g->sword.tab[5]);
	swords_img1(g);
	if (i == 0)
	{
		g->sword.frame1++;
		mlx_image_to_window(g->mlx, g->sword.tab[g->sword.frame1 - 1], g->sword.x, g->sword.y);
	}
	if (i == 1)
	{
		g->sword.frame2--;
		mlx_image_to_window(g->mlx, g->sword.tab[g->sword.frame2 - 1], g->sword.x, g->sword.y);
	}
}

void    refresh(t_lo *g)
{
	g->frame++;
	if ((g->data_p.sword == 0) && (g->frame % 3) == 0 && g->death.death == 0)
	{
		player_anim(g);
		swords(g);
	}
		
	if (g->data_p.sword == 1 && g->death.death == 0 && (g->frame % 3) == 0)
	{
		mlx_delete_image(g->mlx, g->sword.tab[0]);
		mlx_delete_image(g->mlx, g->sword.tab[1]);
		mlx_delete_image(g->mlx, g->sword.tab[2]);
		mlx_delete_image(g->mlx, g->sword.tab[3]);
		mlx_delete_image(g->mlx, g->sword.tab[4]);
		mlx_delete_image(g->mlx, g->sword.tab[5]);
		player_anim_w(g);
	}
	if (g->frame % 5 == 0 && g->ennemie1_alive == 1 && g->death.death == 0)
		g->dir = pat_ennemies1(g, g->dir);
	if (g->death.death == 1 && g->frame % 3 == 0)
	{
		mlx_delete_image(g->mlx, g->sword.tab[0]);
		mlx_delete_image(g->mlx, g->sword.tab[1]);
		mlx_delete_image(g->mlx, g->sword.tab[2]);
		mlx_delete_image(g->mlx, g->sword.tab[3]);
		mlx_delete_image(g->mlx, g->sword.tab[4]);
		mlx_delete_image(g->mlx, g->sword.tab[5]);
		g->death.d_screen->instances->enabled = true;
		player_death(g);
	}
}