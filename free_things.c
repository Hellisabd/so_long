/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 13:51:11 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "so_long.h"
 
void	delete_c(t_lo *g)
{
		g->map[g->del.y][g->del.x] = '0';
}

void    destroy_all(t_lo *g)
{
	if (g->sprite.back_t)
		mlx_delete_texture(g->sprite.back_t);
	if (g->sprite.background)
		mlx_delete_image(g->mlx, g->sprite.background);
	if (g->sprite.player_t)
		mlx_delete_texture(g->sprite.player_t);
	if (g->sprite.player)
		mlx_delete_image(g->mlx, g->sprite.background);
	if (g->sprite.wall_t)
		mlx_delete_texture(g->sprite.wall_t);
	if (g->sprite.wall)
		mlx_delete_image(g->mlx, g->sprite.wall);
}