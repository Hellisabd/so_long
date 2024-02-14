/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:48:27 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 10:09:59 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"


void	ft_count_line(char *file, t_pars *pars)
{
	char	*line;
	int		fd;

	pars->height = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit((ft_printf("An error in the Open function errror as occured"), 1));
	line = get_next_line(fd);
	if (!line)
		exit((ft_printf("Empty file or malloc error"), 1));
	pars->length = ft_strlen(line);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		pars->height++;
	}
	if (line)
		free (line);
	close(fd);
}

void	check_walls(t_pars *pars, t_lo *game)
{
	game->x = -1;
	while (game->map[0][++game->x + 3])
		if (game->map[0][game->x] != '1'
			&& game->map[pars->height - 1][game->x] != '1')
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open1"), 1));
	if (game->map[pars->height - 1][pars->length - 1] != '\0')
		exit((ft_free_tab(game->map), ft_printf("Error\nMap Open2"), 1));
	while (game->y != pars->height - 2)
	{
		if (ft_strlen(game->map[game->y]) != pars->length)
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open3"), 1));
		if (game->map[game->y][0] != '1'
			|| game->map[game->y][pars->length - 2] != '1')
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open3"), 1));
		game->y++;
	}
	game->y = 1;
	while (game->map[game->y + 1])
	{
		if (ft_strlen(game->map[game->y]) != pars->length)
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open4"), 1));
		game->y++;
	}
}

void	map_cpy(t_pars *pars, char *file, t_lo *game)
{
	int	fd;

	game->map = malloc(sizeof(char *) * (pars->height + 1));
	if (!game->map)
		exit((ft_free_tab(game->map), ft_printf("malloc error"), 1));
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit((ft_free_tab(game->map), \
		ft_printf("An error in the Open function as occured"), 1));
	game->map[game->x] = get_next_line(fd);
	if (!game->map[game->x])
		exit((ft_printf("malloc error"), 1));
	game->x++;
	while (game->x < pars->height)
	{
		game->map[game->x] = get_next_line(fd);
		if (!game->map[game->x])
			exit((ft_free_tab(game->map), ft_printf("malloc error"), 1));
		game->x++;
	}
	game->map[pars->height] = NULL;
	if (ft_strlen(game->map[game->x - 1]) != pars->length - 1)
		exit((ft_free_tab(game->map), ft_printf("Error\nMap Open5"), 1));
	close(fd);
}

void	parsing_map(char *file, t_pars *pars, t_lo *game)
{
	ft_count_line(file, pars);
	map_cpy(pars, file, game);
	check_walls(pars, game);
	if (check_infos(game) == -1)
		exit((ft_free_tab(game->map), \
		ft_printf("Error\nInput Error"), 1));
	if (game->player != 1)
		exit((ft_free_tab(game->map), \
		ft_printf("Error\nInput Error"), 1));
	if (game->exit != 1)
		exit((ft_free_tab(game->map), \
		ft_printf("Error\nInput Error"), 1));
	if (game->coll < 1 && game->coll > 3)
		exit((ft_free_tab(game->map), \
		ft_printf("Error\nInput Error"), 1));
	check_valid_exit(game);
	ft_free_tab(game->map);
	game->x = 0;
	ft_count_line(file, pars);
	map_cpy(pars, file, game);
	integr_coll(game);
}
