/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:01 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/09 13:24:38 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "so_long.h"
 
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
	if (g->sprite.uwall_t)
		mlx_delete_texture(g->sprite.uwall_t);
	if (g->sprite.uwall)
		mlx_delete_image(g->mlx, g->sprite.uwall);
	if (g->sprite.rwall_t)
		mlx_delete_texture(g->sprite.rwall_t);
	if (g->sprite.rwall)
		mlx_delete_image(g->mlx, g->sprite.rwall);
	if (g->sprite.lwall_t)
		mlx_delete_texture(g->sprite.lwall_t);
	if (g->sprite.lwall)
		mlx_delete_image(g->mlx, g->sprite.lwall);
}