/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 17:41:44 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	delete_c(t_lo *g)
{
	g->map[g->del.y][g->del.x] = '0';
}

void	destroy_all(void *g1)
{
	t_lo	*g;

	g = g1;
	if (g->sprite.back_t)
		mlx_delete_texture(g->sprite.back_t);
	if (g->sprite.player_t)
		mlx_delete_texture(g->sprite.player_t);
	if (g->sprite.player_w_t)
		mlx_delete_texture(g->sprite.player_w_t);
	if (g->sprite.wall_t)
		mlx_delete_texture(g->sprite.wall_t);
	if (g->sprite.c1_t)
		mlx_delete_texture(g->sprite.c1_t);
	if (g->sprite.c3_t)
		mlx_delete_texture(g->sprite.c3_t);
	if (g->sprite.exit_t)
		mlx_delete_texture(g->sprite.exit_t);
	if (g->sprite.ennemiesr1_t)
		mlx_delete_texture(g->sprite.ennemiesr1_t);
	if (g->sprite.ennemiesl1_t)
		mlx_delete_texture(g->sprite.ennemiesl1_t);
	if (g->sprite.ennemiesr2_t)
		mlx_delete_texture(g->sprite.ennemiesr2_t);
	if (g->sprite.ennemiesl2_t)
		mlx_delete_texture(g->sprite.ennemiesl2_t);
	if (g->sprite.success_t)
		mlx_delete_texture(g->sprite.success_t);
	if (g->death.tab_t[0])
		mlx_delete_texture(g->death.tab_t[0]);
	if (g->death.tab_t[1])
		mlx_delete_texture(g->death.tab_t[1]);
	if (g->death.tab_t[2])
		mlx_delete_texture(g->death.tab_t[2]);
	if (g->death.tab_t[3])
		mlx_delete_texture(g->death.tab_t[3]);
	if (g->death.tab_t[4])
		mlx_delete_texture(g->death.tab_t[4]);
	if (g->death.tab_t[5])
		mlx_delete_texture(g->death.tab_t[5]);
	if (g->death.tab_t[6])
		mlx_delete_texture(g->death.tab_t[6]);
	if (g->death.tab_t[7])
		mlx_delete_texture(g->death.tab_t[7]);
	if (g->death.tab_t[8])
		mlx_delete_texture(g->death.tab_t[8]);
	if (g->death.tab_t[9])
		mlx_delete_texture(g->death.tab_t[9]);
	if (g->death.tab_t[10])
		mlx_delete_texture(g->death.tab_t[10]);
	if (g->death.tab_t[11])
		mlx_delete_texture(g->death.tab_t[11]);
	if (g->death.tab_t[12])
		mlx_delete_texture(g->death.tab_t[12]);
	if (g->death.tab_t[13])
		mlx_delete_texture(g->death.tab_t[13]);
	if (g->death.tab_t[14])
		mlx_delete_texture(g->death.tab_t[14]);
	if (g->death.tab_t[15])
		mlx_delete_texture(g->death.tab_t[15]);
	if (g->death.tab_t[16])
		mlx_delete_texture(g->death.tab_t[16]);
	if (g->death.tab_t[17])
		mlx_delete_texture(g->death.tab_t[17]);
	if (g->death.tab_t[18])
		mlx_delete_texture(g->death.tab_t[18]);
	if (g->death.tab_t[19])
		mlx_delete_texture(g->death.tab_t[19]);
	if (g->death.tab_t[20])
		mlx_delete_texture(g->death.tab_t[20]);
	if (g->death.tab_t[21])
		mlx_delete_texture(g->death.tab_t[21]);
	if (g->death.tab_t[22])
		mlx_delete_texture(g->death.tab_t[22]);
	if (g->death.tab_t[23])
		mlx_delete_texture(g->death.tab_t[23]);
	if (g->death.tab_t[24])
		mlx_delete_texture(g->death.tab_t[24]);
	if (g->death.tab_t[25])
		mlx_delete_texture(g->death.tab_t[25]);
	if (g->death.tab_t[26])
		mlx_delete_texture(g->death.tab_t[26]);
	if (g->death.tab_t[27])
		mlx_delete_texture(g->death.tab_t[27]);
	if (g->death.tab_t[28])
		mlx_delete_texture(g->death.tab_t[28]);
	if (g->death.tab_t[29])
		mlx_delete_texture(g->death.tab_t[29]);
	if (g->death.d_screen_t)
		mlx_delete_texture(g->death.d_screen_t);
	if (g->sword.tab_t[0])
		mlx_delete_texture(g->sword.tab_t[0]);
	if (g->sword.tab_t[1])
		mlx_delete_texture(g->sword.tab_t[1]);
	if (g->sword.tab_t[2])
		mlx_delete_texture(g->sword.tab_t[2]);
	if (g->sword.tab_t[3])
		mlx_delete_texture(g->sword.tab_t[3]);
	if (g->sword.tab_t[4])
		mlx_delete_texture(g->sword.tab_t[4]);
	if (g->sword.tab_t[5])
		mlx_delete_texture(g->sword.tab_t[5]);
	if (g->data_p.tab_t[0])
		mlx_delete_texture(g->data_p.tab_t[0]);
	if (g->data_p.tab_t[1])
		mlx_delete_texture(g->data_p.tab_t[1]);
	if (g->data_p.tab_t[2])
		mlx_delete_texture(g->data_p.tab_t[2]);
	if (g->data_p.tab_t[3])
		mlx_delete_texture(g->data_p.tab_t[3]);
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
	mlx_delete_image(g->mlx, g->score.fs0);
	mlx_delete_image(g->mlx, g->score.fs1);
	mlx_delete_image(g->mlx, g->score.fs2);
	mlx_delete_image(g->mlx, g->score.fs3);
	mlx_delete_image(g->mlx, g->score.fs4);
	mlx_delete_image(g->mlx, g->score.fs5);
	mlx_delete_image(g->mlx, g->score.fs6);
	mlx_delete_image(g->mlx, g->score.fs7);
	mlx_delete_image(g->mlx, g->score.fs8);
	mlx_delete_image(g->mlx, g->score.fs9);
	mlx_delete_image(g->mlx, g->score.ss0);
	mlx_delete_image(g->mlx, g->score.ss1);
	mlx_delete_image(g->mlx, g->score.ss2);
	mlx_delete_image(g->mlx, g->score.ss3);
	mlx_delete_image(g->mlx, g->score.ss4);
	mlx_delete_image(g->mlx, g->score.ss5);
	mlx_delete_image(g->mlx, g->score.ss6);
	mlx_delete_image(g->mlx, g->score.ss7);
	mlx_delete_image(g->mlx, g->score.ss8);
	mlx_delete_image(g->mlx, g->score.ss9);
	mlx_delete_image(g->mlx, g->score.ts0);
	mlx_delete_image(g->mlx, g->score.ts1);
	mlx_delete_image(g->mlx, g->score.ts2);
	mlx_delete_image(g->mlx, g->score.ts3);
	mlx_delete_image(g->mlx, g->score.ts4);
	mlx_delete_image(g->mlx, g->score.ts5);
	mlx_delete_image(g->mlx, g->score.ts6);
	mlx_delete_image(g->mlx, g->score.ts7);
	mlx_delete_image(g->mlx, g->score.ts8);
	mlx_delete_image(g->mlx, g->score.ts9);
}

