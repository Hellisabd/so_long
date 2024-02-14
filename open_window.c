/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:39:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 14:31:56 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move(struct mlx_key_data key, void	*param)
{
	t_lo	*g;

	g = param;
	if (key.key == MLX_KEY_W && key.action == 1)
		g->sprite.player->instances[0].y -= g->size_block_y;
	if (key.key == MLX_KEY_S && key.action == 1)
		g->sprite.player->instances[0].y += g->size_block_y + 1;
	if (key.key == MLX_KEY_A && key.action == 1)
		g->sprite.player->instances[0].x -= g->size_block_x;
	if (key.key == MLX_KEY_D && key.action == 1)
		g->sprite.player->instances[0].x += g->size_block_x;
}

void ft_hook(void *param)
{
	t_lo	*g;
	
	g = param;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	if (mlx_is_key_down(g->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(g->mlx);
	mlx_key_hook(g->mlx, &move, g);
	// check_collectible(g);
}

void   open_window(t_lo *g)
{
	if (!(g->mlx = mlx_init(WIDTH, HEIGHT, "so_long", true)))
	{
		puts(mlx_strerror(mlx_errno));
		exit((ft_printf("Error1\n"), EXIT_FAILURE));
	}
	mlx_set_window_pos(g->mlx, 1000, 500);
	// set_background(g);
	set_player(g);
	set_walls(g);
	// set_coll(g);
	mlx_loop_hook(g->mlx, ft_hook, (void*)g);
	mlx_loop(g->mlx);
	destroy_all(g);
	mlx_terminate(g->mlx);
}
