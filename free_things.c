/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/19 16:21:05 by bgrosjea         ###   ########.fr       */
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
	mlx_delete_texture(g->sprite.back_t);
	mlx_delete_image(g->mlx, g->sprite.background);
	mlx_delete_texture(g->sprite.player_t);
	mlx_delete_image(g->mlx, g->sprite.player);
	mlx_delete_texture(g->sprite.player_w_t);
	mlx_delete_image(g->mlx, g->sprite.player_w);
	mlx_delete_texture(g->sprite.wall_t);
	mlx_delete_image(g->mlx, g->sprite.wall);
	mlx_delete_texture(g->sprite.c1_t);
	mlx_delete_image(g->mlx, g->sprite.c1);
	mlx_delete_texture(g->sprite.c3_t);
	mlx_delete_image(g->mlx, g->sprite.c3);
	mlx_delete_texture(g->sprite.ennemies_t);
	mlx_delete_image(g->mlx, g->sprite.ennemies);
	mlx_delete_texture(g->sprite.exit_t);
	mlx_delete_image(g->mlx, g->sprite.exit);
	mlx_delete_texture(g->sprite.success_t);
	mlx_delete_image(g->mlx, g->sprite.success);
	mlx_delete_texture(g->sword.tab_t[0]);
	mlx_delete_image(g->mlx, g->sword.tab[0]);
	mlx_delete_texture(g->sword.tab_t[1]);
	mlx_delete_image(g->mlx, g->sword.tab[1]);
	mlx_delete_texture(g->sword.tab_t[2]);
	mlx_delete_image(g->mlx, g->sword.tab[2]);
	mlx_delete_texture(g->sword.tab_t[3]);
	mlx_delete_image(g->mlx, g->sword.tab[3]);
	mlx_delete_texture(g->sword.tab_t[4]);
	mlx_delete_image(g->mlx, g->sword.tab[4]);
	mlx_delete_texture(g->sword.tab_t[5]);
	mlx_delete_image(g->mlx, g->sword.tab[5]);
	mlx_delete_texture(g->sword.tab_t[6]);
	mlx_delete_image(g->mlx, g->sword.tab[6]);
	mlx_delete_texture(g->sword.tab_t[7]);
	mlx_delete_image(g->mlx, g->sword.tab[7]);
	mlx_delete_texture(g->sword.tab_t[8]);
	mlx_delete_image(g->mlx, g->sword.tab[8]);
	delete_digit(g);
	mlx_delete_texture(g->score.s0_t);
	mlx_delete_texture(g->score.s1_t);
	mlx_delete_texture(g->score.s2_t);
	mlx_delete_texture(g->score.s3_t);
	mlx_delete_texture(g->score.s4_t);
	mlx_delete_texture(g->score.s5_t);
	mlx_delete_texture(g->score.s6_t);
	mlx_delete_texture(g->score.s7_t);
	mlx_delete_texture(g->score.s8_t);
	mlx_delete_texture(g->score.s9_t);
	delete_death(g, 30);
}

void	delete_death(t_lo *g, int i)
{
	printf("%d", i);
	while (i)
	{
		mlx_delete_texture(g->death.tab_t[i - 1]);
		mlx_delete_image(g->mlx, g->death.tab[i - 1]);
		i--;
	}
	printf("%d", i);
}
