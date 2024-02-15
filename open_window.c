/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:39:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 18:01:36 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move2(t_lo *g, struct mlx_key_data key)
{

	if (key.key == MLX_KEY_A && key.action == 1 && check_collosion_left(g))
	{
		g->score.count_move++;
		aff_score(g);
		g->sprite.player->instances[0].x -= g->size_block_x;
	}
	if (key.key == MLX_KEY_D && key.action == 1 && check_collosion_right(g))
	{
		g->score.count_move++;
		aff_score(g);
		g->sprite.player->instances[0].x += g->size_block_x;
	}
}

void	move(struct mlx_key_data key, void	*param)
{
	t_lo	*g;

	g = param;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	if (key.key >= MLX_KEY_A && key.key <= MLX_KEY_Z)
	{
		if (g->success == 1)
			mlx_close_window((ft_printf("SUCCESS"), g->mlx));
	}
	if (key.key == MLX_KEY_W && key.action == 1 && check_collosion_up(g))
	{
		g->score.count_move++;
		aff_score(g);
		g->sprite.player->instances[0].y -= g->size_block_y;
	}
	if (key.key == MLX_KEY_S && key.action == 1 && check_collosion_down(g))
	{
		g->score.count_move++;
		aff_score(g);
		g->sprite.player->instances[0].y += g->size_block_y;
	}
	move2(g, key);
}

void	ft_hook(void *param)
{
	t_lo	*g;

	g = param;
	g->data_p.player_pos_y = g->sprite.player->instances[0].y;
	g->data_p.player_pos_x = g->sprite.player->instances[0].x;
	if (mlx_is_key_down(g->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(g->mlx);
	mlx_key_hook(g->mlx, &move, g);
	check_collectible(g);
	if (g->count_coll == 0)
		aff_exit(g);
}

void	open_window(t_lo *g)
{
	g->mlx = mlx_init(WIDTH, HEIGHT, "so_long", true);
	if (!g->mlx)
	{
		puts(mlx_strerror(mlx_errno));
		exit((ft_printf("Error1\n"), EXIT_FAILURE));
	}
	mlx_set_window_pos(g->mlx, 1000, 500);
	set_background(g);
	set_player(g);
	set_coll(g);
	set_ennemies(g);
	set_walls(g);
	set_score1(g);
	set_exit(g);
	mlx_loop_hook(g->mlx, ft_hook, (void *)g);
	mlx_loop(g->mlx);
	destroy_all(g);
}
