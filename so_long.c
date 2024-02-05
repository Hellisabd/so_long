/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:59:59 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/05 18:23:16 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_count_line(char *file, t_pars *pars)
{
	pars->height = 0;
	char	*line;
	int		fd;

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

void	parse_line(t_pars *pars, t_lo *game)
{
	game->x = 0;
	while (game->map[0][game->x + 3])
	{
		if (game->map[0][game->x] != '1' && game->map[pars->height - 1][game->x] != '1')
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open1"), 1));
		game->x++;
	}
	if (game->map[pars->height - 1][pars->length - 1] != '\0')
		exit((ft_free_tab(game->map), ft_printf("Error\nMap Open2"), 1));
	while (game->y != pars->height - 2)
	{
		if(ft_strlen(game->map[game->y]) != pars->length)
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open3"), 1));
		if (game->map[game->y][0] != '1' || game->map[game->y][pars->length - 2] != '1')
			exit((ft_free_tab(game->map), ft_printf("Error\nMap Open3"), 1));
		game->y++;
	}
}

void	map_cpy(t_pars *pars, char *file, t_lo *game)
{
	int	fd;

	game->map = malloc(sizeof(char *) * pars->height + 1);
	if (!game->map)
		exit((ft_free_tab(game->map), ft_printf("malloc error"), 1));
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit((ft_free_tab(game->map), ft_printf("An error in the Open function as occured"), 1));
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
	game->map[game->x] = '\0';
	close(fd);
}

void    parsing_map(char *file, t_pars *pars, t_lo *game)
{
	ft_count_line(file, pars);
	map_cpy(pars, file, game);
	parse_line(pars, game);
	ft_free_tab(game->map);
}

int main(int argc, char **argv)
{
	t_lo	game;
	t_pars	pars;

	game.x = 0;
	game.y = 0;
	(void)argc;
	parsing_map(argv[1], &pars, &game);
}