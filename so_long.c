/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 17:44:39 by bgrosjea         ###   ########.fr       */
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
	game.count_move = 0;
	game.map = NULL;
	parsing_map(file, &pars, &game);
	game.height = pars.height;
	game.width = pars.length;
	game.size_block_x = round(WIDTH / (float)(game.width - 1));
	game.size_block_y = round(HEIGHT / (float)(game.height));
	open_window(&game);
	ft_free_tab(game.map);
}
