/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_death.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:18:55 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:46:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_death11(t_lo *g)
{
	g->death.tab[22]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[23], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[23]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[24], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[24]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[25], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[25]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[26], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[26]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[27], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[27]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[28], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[28]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[29], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[29]->instances->enabled = false;
}

void	init_death10(t_lo *g)
{
	g->death.tab[14]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[15], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[15]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[16], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[16]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[17], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[17]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[18], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[18]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[19], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[19]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[20], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[20]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[21], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[21]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[22], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	init_death11(g);
}

void	player_death(t_lo *g)
{
	g->death.tab[g->death.frame]->instances->enabled = true;
	if (g->death.frame > 0)
		g->death.tab[g->death.frame - 1]->instances->enabled = false;
	g->death.frame++;
	if (g->death.frame == 30)
		mlx_close_window((g->close = 1, g->mlx));
}
