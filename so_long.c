/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 15:10:01 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
	game.ennemie1_alive = 0;
	game.time = 2147483647;
	game.success = 0;
	game.data_p.holy = 0;
	game.ennemie2_alive = 0;
	game.death.death = 0;
	game.death.frame = 0;
	game.data_p.frame = 0;
	game.data_p.weapon = 0;
	parsing_map(file, &pars, &game);
	game.height = pars.height;
	game.width = pars.length;
	game.size_block_x = round(WIDTH / (float)(game.width - 1));
	game.size_block_y = round(HEIGHT / (float)(game.height));
	open_window(&game);
	ft_free_tab(game.map);
	return (game);
}

int	main(void)
{
	char	*file0;
	t_lo	g;

	file0 = "map/map_file.ber";
	g = lvl_def(file0, g);
	mlx_terminate(g.mlx);
}
