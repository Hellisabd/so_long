/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_death1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:12:25 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:49:19 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_death4(t_lo *g)
{
	g->death.tab_t[15] = mlx_load_png("assets/death16.png");
	if (!g->death.tab_t[15])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[15] = mlx_texture_to_image(g->mlx, g->death.tab_t[15]);
	if (!g->death.tab[15])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[16] = mlx_load_png("assets/death17.png");
	if (!g->death.tab_t[16])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[16] = mlx_texture_to_image(g->mlx, g->death.tab_t[16]);
	if (!g->death.tab[16])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[17] = mlx_load_png("assets/death18.png");
	if (!g->death.tab_t[17])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[17] = mlx_texture_to_image(g->mlx, g->death.tab_t[17]);
	if (!g->death.tab[17])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[18] = mlx_load_png("assets/death19.png");
	if (!g->death.tab_t[18])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[18] = mlx_texture_to_image(g->mlx, g->death.tab_t[18]);
	if (!g->death.tab[18])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death5(g);
}

void	init_death3(t_lo *g)
{
	g->death.tab_t[11] = mlx_load_png("assets/death12.png");
	if (!g->death.tab_t[11])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[11] = mlx_texture_to_image(g->mlx, g->death.tab_t[11]);
	if (!g->death.tab[11])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[12] = mlx_load_png("assets/death13.png");
	if (!g->death.tab_t[12])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[12] = mlx_texture_to_image(g->mlx, g->death.tab_t[12]);
	if (!g->death.tab[12])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[13] = mlx_load_png("assets/death14.png");
	if (!g->death.tab_t[13])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[13] = mlx_texture_to_image(g->mlx, g->death.tab_t[13]);
	if (!g->death.tab[13])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[14] = mlx_load_png("assets/death15.png");
	if (!g->death.tab_t[14])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[14] = mlx_texture_to_image(g->mlx, g->death.tab_t[14]);
	if (!g->death.tab[14])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death4(g);
}

void	init_death2(t_lo *g)
{
	g->death.tab_t[7] = mlx_load_png("assets/death8.png");
	if (!g->death.tab_t[7])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[7] = mlx_texture_to_image(g->mlx, g->death.tab_t[7]);
	if (!g->death.tab[7])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[8] = mlx_load_png("assets/death9.png");
	if (!g->death.tab_t[8])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[8] = mlx_texture_to_image(g->mlx, g->death.tab_t[8]);
	if (!g->death.tab[8])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[9] = mlx_load_png("assets/death10.png");
	if (!g->death.tab_t[9])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[9] = mlx_texture_to_image(g->mlx, g->death.tab_t[9]);
	if (!g->death.tab[9])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[10] = mlx_load_png("assets/death11.png");
	if (!g->death.tab_t[10])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[10] = mlx_texture_to_image(g->mlx, g->death.tab_t[10]);
	if (!g->death.tab[10])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death3(g);
}

void	init_death1(t_lo *g)
{
	g->death.tab[3] = mlx_texture_to_image(g->mlx, g->death.tab_t[3]);
	if (!g->death.tab[3])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[4] = mlx_load_png("assets/death5.png");
	if (!g->death.tab_t[4])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[4] = mlx_texture_to_image(g->mlx, g->death.tab_t[4]);
	if (!g->death.tab[4])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[5] = mlx_load_png("assets/death6.png");
	if (!g->death.tab_t[5])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[5] = mlx_texture_to_image(g->mlx, g->death.tab_t[5]);
	if (!g->death.tab[5])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[6] = mlx_load_png("assets/death7.png");
	if (!g->death.tab_t[6])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[6] = mlx_texture_to_image(g->mlx, g->death.tab_t[6]);
	if (!g->death.tab[6])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death2(g);
}

void	init_death(t_lo *g)
{
	g->death.tab_t[0] = mlx_load_png("assets/death1.png");
	if (!g->death.tab_t[0])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[0] = mlx_texture_to_image(g->mlx, g->death.tab_t[0]);
	if (!g->death.tab[0])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[1] = mlx_load_png("assets/death2.png");
	if (!g->death.tab_t[1])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[1] = mlx_texture_to_image(g->mlx, g->death.tab_t[1]);
	if (!g->death.tab[1])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[2] = mlx_load_png("assets/death3.png");
	if (!g->death.tab_t[2])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab[2] = mlx_texture_to_image(g->mlx, g->death.tab_t[2]);
	if (!g->death.tab[2])
		exit((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	g->death.tab_t[3] = mlx_load_png("assets/death4.png");
	if (!g->death.tab_t[3])
		exit ((ft_printf("Error\nloading speed PNG\n"), d_a(g), EXIT_FAILURE));
	init_death1(g);
}
