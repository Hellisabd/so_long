/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_death2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:13:34 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:46:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_death9(t_lo *g)
{
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[7], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[7]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[8], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[8]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[9], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[9]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[10], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[10]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[11], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[11]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[12], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[12]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[13], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[13]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[14], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	init_death10(g);
}

void	init_death8(t_lo *g)
{
	if (-1 == mlx_image_to_window(g->mlx, g->death.d_screen, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.d_screen->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[0], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[0]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[1], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[1]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[2], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[2]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[3], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[3]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[4], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[4]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[5], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[5]->instances->enabled = false;
	if (-1 == mlx_image_to_window(g->mlx, g->death.tab[6], 750, 750))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[6]->instances->enabled = false;
	init_death9(g);
}

void	init_death7(t_lo *g)
{
	g->death.tab_t[27] = mlx_load_png("assets/death28.png");
	if (!g->death.tab_t[27])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[27] = mlx_texture_to_image(g->mlx, g->death.tab_t[27]);
	if (!g->death.tab[27])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[28] = mlx_load_png("assets/death29.png");
	if (!g->death.tab_t[28])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[28] = mlx_texture_to_image(g->mlx, g->death.tab_t[28]);
	if (!g->death.tab[28])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[29] = mlx_load_png("assets/death30.png");
	if (!g->death.tab_t[29])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[29] = mlx_texture_to_image(g->mlx, g->death.tab_t[29]);
	if (!g->death.tab[29])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.d_screen_t = mlx_load_png("assets/died_screen.png");
	if (!g->death.d_screen_t)
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.d_screen = mlx_texture_to_image(g->mlx, g->death.d_screen_t);
	if (!g->death.d_screen)
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death8(g);
}

void	init_death6(t_lo *g)
{
	g->death.tab_t[23] = mlx_load_png("assets/death24.png");
	if (!g->death.tab_t[23])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[23] = mlx_texture_to_image(g->mlx, g->death.tab_t[23]);
	if (!g->death.tab[23])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[24] = mlx_load_png("assets/death25.png");
	if (!g->death.tab_t[24])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[24] = mlx_texture_to_image(g->mlx, g->death.tab_t[24]);
	if (!g->death.tab[24])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[25] = mlx_load_png("assets/death26.png");
	if (!g->death.tab_t[25])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[25] = mlx_texture_to_image(g->mlx, g->death.tab_t[25]);
	if (!g->death.tab[25])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[26] = mlx_load_png("assets/death27.png");
	if (!g->death.tab_t[26])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[26] = mlx_texture_to_image(g->mlx, g->death.tab_t[26]);
	if (!g->death.tab[26])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death7(g);
}

void	init_death5(t_lo *g)
{
	g->death.tab_t[19] = mlx_load_png("assets/death20.png");
	if (!g->death.tab_t[19])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[19] = mlx_texture_to_image(g->mlx, g->death.tab_t[19]);
	if (!g->death.tab[19])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[20] = mlx_load_png("assets/death21.png");
	if (!g->death.tab_t[20])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[20] = mlx_texture_to_image(g->mlx, g->death.tab_t[20]);
	if (!g->death.tab[20])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[21] = mlx_load_png("assets/death22.png");
	if (!g->death.tab_t[21])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[21] = mlx_texture_to_image(g->mlx, g->death.tab_t[21]);
	if (!g->death.tab[21])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[22] = mlx_load_png("assets/death23.png");
	if (!g->death.tab_t[22])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[22] = mlx_texture_to_image(g->mlx, g->death.tab_t[22]);
	if (!g->death.tab[22])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death6(g);
}
