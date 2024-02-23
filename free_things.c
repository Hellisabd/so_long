/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:52:20 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	d_a3(t_lo *g)
{
	if (g->death.tab_t[0])
		mlx_delete_texture(g->death.tab_t[0]);
	if (g->death.tab_t[1])
		mlx_delete_texture(g->death.tab_t[1]);
	if (g->death.tab_t[2])
		mlx_delete_texture(g->death.tab_t[2]);
	if (g->death.tab_t[3])
		mlx_delete_texture(g->death.tab_t[3]);
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
	d_a4(g);
}

void	d_a2(t_lo *g)
{
	if (g->sprite.ennemiesl2_t)
		mlx_delete_texture(g->sprite.ennemiesl2_t);
	if (g->sprite.success_t)
		mlx_delete_texture(g->sprite.success_t);
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
	d_a3(g);
}

void	d_a1(t_lo *g)
{
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
	d_a2(g);
}

void	d_a(void *g1)
{
	t_lo	*g;

	g = g1;
	ft_printf("%d", g->close);
	if (g->close == 0)
		mlx_close_window(g->mlx);
	if (g->sprite.back_t)
		mlx_delete_texture(g->sprite.back_t);
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
	d_a1(g);
}
