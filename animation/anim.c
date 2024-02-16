/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:04:18 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/16 16:06:14 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    lunette_img(t_lo *g)
{
    g->lun.tab[0] = mlx_texture_to_image(g->mlx, g->lun.tab_t[0]);
	if (!g->lun.tab_t[0])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[0], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
    g->lun.tab[1] = mlx_texture_to_image(g->mlx, g->lun.tab_t[1]);
	if (!g->lun.tab_t[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[1], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
    g->lun.tab[2] = mlx_texture_to_image(g->mlx, g->lun.tab_t[2]);
	if (!g->lun.tab_t[2])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->lun.tab[2], g->size_block_x, g->size_block_y))
		exit ((ft_printf("Error\nresizing collectible\n"), EXIT_FAILURE));
}

void    lunettes(t_lo *g)
{
    mlx_delete_image(g->mlx, g->lun.tab[0]);
    mlx_delete_image(g->mlx, g->lun.tab[1]);
    mlx_delete_image(g->mlx, g->lun.tab[2]);
    lunette_img(g);
    g->lun.frame++;
    if (g->lun.frame < 4)
        mlx_image_to_window(g->mlx, g->lun.tab[g->lun.frame - 1], g->lun.x, g->lun.y);
    if (g->lun.frame >= 4)
    {
        if (g->lun.frame == 4)
            mlx_image_to_window(g->mlx, g->lun.tab[2], g->lun.x, g->lun.y);
        if (g->lun.frame == 5)
            mlx_image_to_window(g->mlx, g->lun.tab[1], g->lun.x, g->lun.y);
        if (g->lun.frame == 6)
        {
            mlx_image_to_window(g->mlx, g->lun.tab[0], g->lun.x, g->lun.y);
            g->lun.frame = 0;
        }
    }
}

void    refresh(t_lo *g)
{
    g->frame++;
    if ((g->data_p.weapon == 0) && (g->frame % 6) == 0)
        lunettes(g);
    if (g->data_p.weapon == 1)
    {
        mlx_delete_image(g->mlx, g->lun.tab[0]);
        mlx_delete_image(g->mlx, g->lun.tab[1]);
        mlx_delete_image(g->mlx, g->lun.tab[2]);
    }
    if (g->frame % 1 == 0 && g->ennemies_alive == 1)
        g->dir = pat_ennemies(g, g->dir);
}