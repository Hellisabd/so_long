/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 14:29:37 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_lo	game;
	t_pars	pars;
	char	*file;

	file = "map/map_file.ber";
	game.exit = 0;
	game.player = 0;
	game.coll = 0;
	game.x = 0;
	game.y = 0;
	game.map = NULL;
	parsing_map(file, &pars, &game);
	game.height = pars.height;
	game.width = pars.length;
	game.size_block_x = WIDTH / (float)(game.width - 1);
	game.size_block_y = HEIGHT / (float)(game.height);
	// game.coll1.c = 'S';
	// game.coll2.c = 'J';
	// game.coll3.c = 'W';
	// game.coll1.path = "assets/yellow_c.png";
	// game.coll2.path = "assets/yellow_c.png";
	// game.coll3.path = "assets/yellow_c.png";
	open_window(&game);
	ft_free_tab(game.map);
	// ft_free_tab(game.h_m.hidden_map);
}
