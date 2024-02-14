/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 16:51:27 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "so_long.h"
 
void	delete_c(t_lo *g)
{
		g->map[g->del.y][g->del.x] = '0';
}

void    destroy_all(t_lo *g)
{
	// mlx_delete_texture(g->sprite.back_t);
	// mlx_delete_image(g->mlx, g->sprite.background);
	mlx_delete_texture(g->sprite.player_t);
	mlx_delete_image(g->mlx, g->sprite.background);
	mlx_delete_texture(g->sprite.wall_t);
	mlx_delete_image(g->mlx, g->sprite.wall);
}