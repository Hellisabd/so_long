/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 11:50:31 by bgrosjea         ###   ########.fr       */
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
	mlx_delete_texture(g->sprite.player_t);
	mlx_delete_image(g->mlx, g->sprite.background);
	mlx_delete_texture(g->sprite.wall_t);
	mlx_delete_image(g->mlx, g->sprite.wall);
	mlx_delete_texture(g->sprite.c1_t);
	mlx_delete_image(g->mlx, g->sprite.c1);
	mlx_delete_texture(g->sprite.c2_t);
	mlx_delete_image(g->mlx, g->sprite.c2);
	mlx_delete_texture(g->sprite.c3_t);
	mlx_delete_image(g->mlx, g->sprite.c3);
	mlx_delete_texture(g->sprite.ennemies_t);
	mlx_delete_image(g->mlx, g->sprite.ennemies);
	mlx_delete_texture(g->sprite.exit_t);
	mlx_delete_image(g->mlx, g->sprite.exit);
}
