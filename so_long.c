/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 10:32:14 by bgrosjea         ###   ########.fr       */
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
	game.data_p.p_speed = 10;
	game.map = NULL;
	parsing_map(file, &pars, &game);
	game.height = pars.height;
	game.width = pars.length;
	game.coll1.c = 'S';
	game.coll2.c = 'J';
	game.coll3.c = 'W';
	game.coll1.path = "assets/c_speed.png";
	hidden_map(&game);
	open_window(&game);
	ft_free_tab(game.map);
	ft_free_tab(game.h_m.hidden_map);
}
