/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:39:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/09 18:23:55 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_hook(void* param)
{
	t_lo	*g;
	
	g = param;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	if (mlx_is_key_down(g->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(g->mlx);
	if (mlx_is_key_down(g->mlx, MLX_KEY_W)  && check_collision_up(g))
		g->sprite.player->instances[0].y -= 10;
	if (mlx_is_key_down(g->mlx, MLX_KEY_S)  && check_collision_down(g))
		g->sprite.player->instances[0].y += 10;
	if (mlx_is_key_down(g->mlx, MLX_KEY_A)  && check_collision_left(g))
		g->sprite.player->instances[0].x -= 10;
	if (mlx_is_key_down(g->mlx, MLX_KEY_D)  && check_collision_right(g))
		g->sprite.player->instances[0].x += 10;
}

void   open_window(t_lo *g)
{
	if (!(g->mlx = mlx_init(WIDTH, HEIGHT, "so_long", true)))
	{
		puts(mlx_strerror(mlx_errno));
		exit((ft_printf("Error1\n"), EXIT_FAILURE));
	}
	mlx_set_window_pos(g->mlx, 1000, 500);
	set_background(g);
	set_player(g);
	set_walls(g);
	mlx_loop_hook(g->mlx, ft_hook, (void*)g);

	mlx_loop(g->mlx);
	destroy_all(g);
	mlx_terminate(g->mlx);
}
