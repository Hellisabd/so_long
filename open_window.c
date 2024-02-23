/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:39:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 16:30:31 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move2(t_lo *g, struct mlx_key_data key)
{
	if (key.key == MLX_KEY_A && key.action == 1 && check_collosion_left(g)
		&& g->success == 0)
		move_player((aff_score(g), g->score.count_move++, g), 2);
	if (key.key == MLX_KEY_D && key.action == 1 && check_collosion_right(g)
		&& g->success == 0)
		move_player((aff_score(g), g->score.count_move++, g), 1);
}

void	move(struct mlx_key_data key, void	*param)
{
	t_lo	*g;

	g = param;
	if (g->data_p.sword == 0)
	{
		g->data_p.player_pos_x = g->data_p.tab[0]->instances[0].x;
		g->data_p.player_pos_y = g->data_p.tab[0]->instances[0].y;
	}
	if (g->data_p.sword == 1)
	{
		g->data_p.player_pos_x = g->data_p.tab_w[0]->instances[0].x;
		g->data_p.player_pos_y = g->data_p.tab_w[0]->instances[0].y;
	}
	if (key.key == MLX_KEY_W && key.action == 1 && check_collosion_up(g)
		&& g->success == 0)
		move_player((aff_score(g), g->score.count_move++, g), 0);
	if (key.key == MLX_KEY_S && key.action == 1 && check_collosion_down(g)
		&& g->success == 0)
		move_player((aff_score(g), g->score.count_move++, g), 3);
	move2(g, key);
}

void	ft_hook(void *param)
{
	t_lo	*g;

	g = param;
	g->time += g->mlx->delta_time;
	if (g->time > 0.03)
	{
		refresh(g);
		check_collectible(g);
		g->time = 0;
	}
	if (g->death.death == 0)
	{
		if (mlx_is_key_down(g->mlx, MLX_KEY_ESCAPE))
			mlx_close_window((g->close = 1, g->mlx));
		mlx_key_hook(g->mlx, &move, g);
		check_collectible(g);
		if (g->count_coll == 0)
			aff_exit(g);
	}
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
	mlx_set_window_limit(g->mlx, WIDTH, HEIGHT, WIDTH, HEIGHT);
	init_texture(g);
	set_background(g);
	set_player(g);
	set_player_w(g);
	set_coll(g);
	set_ennemies(g);
	set_walls(g);
	set_score1(g);
	set_exit(g);
	set_success(g);
	aff_score(g);
	init_death(g);
	mlx_loop_hook(g->mlx, ft_hook, (void *)g);
	mlx_loop(g->mlx);
	d_a(g);
}
