/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/29 13:28:28 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_lo	lvl_def_ext(t_lo *game, char *file, t_pars pars)
{
	game->ennemie1_alive = 0;
	game->time = 2147483647;
	game->success = 0;
	game->data_p.holy = 0;
	game->ennemie2_alive = 0;
	game->death.death = 0;
	game->close = 0;
	game->death.frame = 0;
	game->data_p.frame = 0;
	game->data_p.weapon = 0;
	parsing_map(file, &pars, game);
	game->height = pars.height;
	game->width = pars.length;
	return (*game);
}

t_lo	lvl_def(char *file, t_lo game)
{
	t_pars	pars;

	game.exit = 0;
	game.player = 0;
	game.data_p.player_pos_y = 1;
	game.data_p.player_pos_x = 1;
	game.coll = 0;
	game.x = 0;
	game.y = 0;
	game.sword.frame1 = 0;
	game.sword.frame2 = 5;
	game.i = 2;
	game.data_p.sword = 0;
	game.dir1 = 0;
	game.dir2 = 0;
	game.frame = 0;
	game.score.count_move = 0;
	game.map = NULL;
	game = lvl_def_ext(&game, file, pars);
	game.size_block_x = round(WIDTH / (float)(game.width - 1));
	game.size_block_y = round(HEIGHT / (float)(game.height));
	open_window(&game);
	if (game.map)
		ft_free_tab(game.map);
	return (game);
}

int	main(int argc, char **argv)
{
	t_lo	g;

	if (argc != 2)
		return (ft_printf("Error\nToo many arguments\n"));
	if (!file_validity(argv[1]))
		return (ft_printf("Error\nWrong file format"), 0);
	g = lvl_def(argv[1], g);
	mlx_terminate(g.mlx);
}
