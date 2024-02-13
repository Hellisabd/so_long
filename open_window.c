/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:39:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/13 16:42:51 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	jump(struct mlx_key_data key, void	*param)
{
	t_lo	*g;
	// double	time;

	// time = mlx_get_time() + 5;
	g = param;
	if (key.key == MLX_KEY_W && key.action == 1)
	{
		// while (check_collision_up(g))
			g->sprite.player->instances[0].y -= 150;
	}
}

void ft_hook(void *param)
{
	t_lo	*g;
	
	g = param;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	gravity(g);
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	if (mlx_is_key_down(g->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(g->mlx);
	if (mlx_is_key_down(g->mlx, MLX_KEY_W))
		mlx_key_hook(g->mlx, &jump, g);
	if (mlx_is_key_down(g->mlx, MLX_KEY_S)  && check_collision_down(g))
		g->sprite.player->instances[0].y += g->data_p.p_speed;
	if (mlx_is_key_down(g->mlx, MLX_KEY_A)  && check_collision_left(g))
		g->sprite.player->instances[0].x -= g->data_p.p_speed;
	if (mlx_is_key_down(g->mlx, MLX_KEY_D)  && check_collision_right(g))
		g->sprite.player->instances[0].x += g->data_p.p_speed;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	check_collectible(g);
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
	set_coll(g);
	mlx_loop_hook(g->mlx, ft_hook, (void*)g);
	mlx_loop(g->mlx);
	destroy_all(g);
	mlx_terminate(g->mlx);
}
