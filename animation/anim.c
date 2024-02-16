/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:04:18 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/16 17:17:41 by bgrosjea         ###   ########.fr       */
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
    g->sword.tab[6] = mlx_texture_to_image(g->mlx, g->sword.tab_t[6]);
	if (!g->sword.tab[6])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[6], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
    g->sword.tab[7] = mlx_texture_to_image(g->mlx, g->sword.tab_t[7]);
	if (!g->sword.tab[7])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[7], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
    g->sword.tab[8] = mlx_texture_to_image(g->mlx, g->sword.tab_t[3]);
	if (!g->sword.tab[8])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sword.tab[8], g->size_block_x, g->size_block_y))
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
	if (!mlx_resize_image(g->sword.tab[1], g->size_block_x, g->size_block_y))
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
        g->sword.frame2 = 10;
    }
    if (g->sword.frame1 == 9)
        i = 1;
    mlx_delete_image(g->mlx, g->sword.tab[0]);
    mlx_delete_image(g->mlx, g->sword.tab[1]);
    mlx_delete_image(g->mlx, g->sword.tab[2]);
    mlx_delete_image(g->mlx, g->sword.tab[3]);
    mlx_delete_image(g->mlx, g->sword.tab[4]);
    mlx_delete_image(g->mlx, g->sword.tab[5]);
    mlx_delete_image(g->mlx, g->sword.tab[6]);
    mlx_delete_image(g->mlx, g->sword.tab[7]);
    mlx_delete_image(g->mlx, g->sword.tab[8]);
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
    if ((g->data_p.weapon == 0) && (g->frame % 4) == 0)
        swords(g);
    if (g->data_p.weapon == 1)
    {
        mlx_delete_image(g->mlx, g->sword.tab[0]);
        mlx_delete_image(g->mlx, g->sword.tab[1]);
        mlx_delete_image(g->mlx, g->sword.tab[2]);
        mlx_delete_image(g->mlx, g->sword.tab[3]);
        mlx_delete_image(g->mlx, g->sword.tab[4]);
        mlx_delete_image(g->mlx, g->sword.tab[5]);
        mlx_delete_image(g->mlx, g->sword.tab[6]);
        mlx_delete_image(g->mlx, g->sword.tab[7]);
        mlx_delete_image(g->mlx, g->sword.tab[8]);
    }
    if (g->frame % 1 == 0 && g->ennemies_alive == 1)
        g->dir = pat_ennemies(g, g->dir);
}