/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:38:55 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:46:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	d_a9(t_lo *g)
{
	mlx_delete_image(g->mlx, g->death.d_screen);
	mlx_delete_image(g->mlx, g->sword.tab[0]);
	mlx_delete_image(g->mlx, g->sword.tab[1]);
	mlx_delete_image(g->mlx, g->sword.tab[2]);
	mlx_delete_image(g->mlx, g->sword.tab[3]);
	mlx_delete_image(g->mlx, g->sword.tab[4]);
	mlx_delete_image(g->mlx, g->sword.tab[5]);
	mlx_delete_image(g->mlx, g->data_p.tab[0]);
	mlx_delete_image(g->mlx, g->data_p.tab[1]);
	mlx_delete_image(g->mlx, g->data_p.tab[2]);
	mlx_delete_image(g->mlx, g->data_p.tab[3]);
	mlx_delete_image(g->mlx, g->data_p.tab[4]);
	mlx_delete_image(g->mlx, g->data_p.tab[5]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[0]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[1]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[2]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[3]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[4]);
	mlx_delete_image(g->mlx, g->data_p.tab_w[5]);
	d_a10(g);
}

void	d_a8(t_lo *g)
{
	mlx_delete_image(g->mlx, g->death.tab[12]);
	mlx_delete_image(g->mlx, g->death.tab[13]);
	mlx_delete_image(g->mlx, g->death.tab[14]);
	mlx_delete_image(g->mlx, g->death.tab[15]);
	mlx_delete_image(g->mlx, g->death.tab[16]);
	mlx_delete_image(g->mlx, g->death.tab[17]);
	mlx_delete_image(g->mlx, g->death.tab[18]);
	mlx_delete_image(g->mlx, g->death.tab[19]);
	mlx_delete_image(g->mlx, g->death.tab[20]);
	mlx_delete_image(g->mlx, g->death.tab[21]);
	mlx_delete_image(g->mlx, g->death.tab[22]);
	mlx_delete_image(g->mlx, g->death.tab[23]);
	mlx_delete_image(g->mlx, g->death.tab[24]);
	mlx_delete_image(g->mlx, g->death.tab[25]);
	mlx_delete_image(g->mlx, g->death.tab[26]);
	mlx_delete_image(g->mlx, g->death.tab[27]);
	mlx_delete_image(g->mlx, g->death.tab[28]);
	mlx_delete_image(g->mlx, g->death.tab[29]);
	d_a9(g);
}

void	d_a7(t_lo *g)
{
	mlx_delete_image(g->mlx, g->sprite.background);
	mlx_delete_image(g->mlx, g->sprite.player);
	mlx_delete_image(g->mlx, g->sprite.player_w);
	mlx_delete_image(g->mlx, g->sprite.wall);
	mlx_delete_image(g->mlx, g->sprite.exit);
	mlx_delete_image(g->mlx, g->sprite.c1);
	mlx_delete_image(g->mlx, g->sprite.c3);
	mlx_delete_image(g->mlx, g->sprite.ennemiesr1);
	mlx_delete_image(g->mlx, g->sprite.ennemiesl1);
	mlx_delete_image(g->mlx, g->sprite.ennemiesl2);
	mlx_delete_image(g->mlx, g->sprite.ennemiesr2);
	mlx_delete_image(g->mlx, g->sprite.success);
	mlx_delete_image(g->mlx, g->death.tab[0]);
	mlx_delete_image(g->mlx, g->death.tab[1]);
	mlx_delete_image(g->mlx, g->death.tab[2]);
	mlx_delete_image(g->mlx, g->death.tab[3]);
	mlx_delete_image(g->mlx, g->death.tab[4]);
	mlx_delete_image(g->mlx, g->death.tab[5]);
	mlx_delete_image(g->mlx, g->death.tab[6]);
	mlx_delete_image(g->mlx, g->death.tab[7]);
	mlx_delete_image(g->mlx, g->death.tab[8]);
	mlx_delete_image(g->mlx, g->death.tab[9]);
	mlx_delete_image(g->mlx, g->death.tab[10]);
	mlx_delete_image(g->mlx, g->death.tab[11]);
	d_a8(g);
}

void	d_a6(t_lo *g)
{
	if (g->score.s2_t)
		mlx_delete_texture(g->score.s2_t);
	if (g->score.s3_t)
		mlx_delete_texture(g->score.s3_t);
	if (g->score.s4_t)
		mlx_delete_texture(g->score.s4_t);
	if (g->score.s5_t)
		mlx_delete_texture(g->score.s5_t);
	if (g->score.s6_t)
		mlx_delete_texture(g->score.s6_t);
	if (g->score.s7_t)
		mlx_delete_texture(g->score.s7_t);
	if (g->score.s8_t)
		mlx_delete_texture(g->score.s8_t);
	if (g->score.s9_t)
		mlx_delete_texture(g->score.s9_t);
	d_a7(g);
}

void	d_a5(t_lo *g)
{
	if (g->data_p.tab_t[4])
		mlx_delete_texture(g->data_p.tab_t[4]);
	if (g->data_p.tab_t[5])
		mlx_delete_texture(g->data_p.tab_t[5]);
	if (g->data_p.tab_w_t[0])
		mlx_delete_texture(g->data_p.tab_w_t[0]);
	if (g->data_p.tab_w_t[1])
		mlx_delete_texture(g->data_p.tab_w_t[1]);
	if (g->data_p.tab_w_t[2])
		mlx_delete_texture(g->data_p.tab_w_t[2]);
	if (g->data_p.tab_w_t[3])
		mlx_delete_texture(g->data_p.tab_w_t[3]);
	if (g->data_p.tab_w_t[4])
		mlx_delete_texture(g->data_p.tab_w_t[4]);
	if (g->data_p.tab_w_t[5])
		mlx_delete_texture(g->data_p.tab_w_t[5]);
	if (g->score.s0_t)
		mlx_delete_texture(g->score.s0_t);
	if (g->score.s1_t)
		mlx_delete_texture(g->score.s1_t);
	d_a6(g);
}
