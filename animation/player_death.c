/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_death.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:18:55 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 14:30:01 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_death(t_lo *g)
{
	g->death.tab_t[0] = mlx_load_png("assets/death1.png");
	if (!g->death.tab_t[0])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[0] = mlx_texture_to_image(g->mlx, g->death.tab_t[0]);
	if (!g->death.tab[0])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[1] = mlx_load_png("assets/death2.png");
	if (!g->death.tab_t[1])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[1] = mlx_texture_to_image(g->mlx, g->death.tab_t[1]);
	if (!g->death.tab[1])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[2] = mlx_load_png("assets/death3.png");
	if (!g->death.tab_t[2])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[2] = mlx_texture_to_image(g->mlx, g->death.tab_t[2]);
	if (!g->death.tab[2])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[3] = mlx_load_png("assets/death4.png");
	if (!g->death.tab_t[3])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[3] = mlx_texture_to_image(g->mlx, g->death.tab_t[3]);
	if (!g->death.tab[3])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[4] = mlx_load_png("assets/death5.png");
	if (!g->death.tab_t[4])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[4] = mlx_texture_to_image(g->mlx, g->death.tab_t[4]);
	if (!g->death.tab[4])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[5] = mlx_load_png("assets/death6.png");
	if (!g->death.tab_t[5])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[5] = mlx_texture_to_image(g->mlx, g->death.tab_t[5]);
	if (!g->death.tab[5])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[6] = mlx_load_png("assets/death7.png");
	if (!g->death.tab_t[6])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[6] = mlx_texture_to_image(g->mlx, g->death.tab_t[6]);
	if (!g->death.tab[6])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[7] = mlx_load_png("assets/death8.png");
	if (!g->death.tab_t[7])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[7] = mlx_texture_to_image(g->mlx, g->death.tab_t[7]);
	if (!g->death.tab[7])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[8] = mlx_load_png("assets/death9.png");
	if (!g->death.tab_t[8])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[8] = mlx_texture_to_image(g->mlx, g->death.tab_t[8]);
	if (!g->death.tab[8])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[9] = mlx_load_png("assets/death10.png");
	if (!g->death.tab_t[9])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[9] = mlx_texture_to_image(g->mlx, g->death.tab_t[9]);
	if (!g->death.tab[9])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[10] = mlx_load_png("assets/death11.png");
	if (!g->death.tab_t[10])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[10] = mlx_texture_to_image(g->mlx, g->death.tab_t[10]);
	if (!g->death.tab[10])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[11] = mlx_load_png("assets/death12.png");
	if (!g->death.tab_t[11])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[11] = mlx_texture_to_image(g->mlx, g->death.tab_t[11]);
	if (!g->death.tab[11])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[12] = mlx_load_png("assets/death13.png");
	if (!g->death.tab_t[12])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[12] = mlx_texture_to_image(g->mlx, g->death.tab_t[12]);
	if (!g->death.tab[12])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[13] = mlx_load_png("assets/death14.png");
	if (!g->death.tab_t[13])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[13] = mlx_texture_to_image(g->mlx, g->death.tab_t[13]);
	if (!g->death.tab[13])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[14] = mlx_load_png("assets/death15.png");
	if (!g->death.tab_t[14])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[14] = mlx_texture_to_image(g->mlx, g->death.tab_t[14]);
	if (!g->death.tab[14])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[15] = mlx_load_png("assets/death16.png");
	if (!g->death.tab_t[15])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[15] = mlx_texture_to_image(g->mlx, g->death.tab_t[15]);
	if (!g->death.tab[15])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[16] = mlx_load_png("assets/death17.png");
	if (!g->death.tab_t[16])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[16] = mlx_texture_to_image(g->mlx, g->death.tab_t[16]);
	if (!g->death.tab[16])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[17] = mlx_load_png("assets/death18.png");
	if (!g->death.tab_t[17])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[17] = mlx_texture_to_image(g->mlx, g->death.tab_t[17]);
	if (!g->death.tab[17])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[18] = mlx_load_png("assets/death19.png");
	if (!g->death.tab_t[18])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[18] = mlx_texture_to_image(g->mlx, g->death.tab_t[18]);
	if (!g->death.tab[18])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[19] = mlx_load_png("assets/death20.png");
	if (!g->death.tab_t[19])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[19] = mlx_texture_to_image(g->mlx, g->death.tab_t[19]);
	if (!g->death.tab[19])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[20] = mlx_load_png("assets/death21.png");
	if (!g->death.tab_t[20])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[20] = mlx_texture_to_image(g->mlx, g->death.tab_t[20]);
	if (!g->death.tab[20])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[21] = mlx_load_png("assets/death22.png");
	if (!g->death.tab_t[21])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[21] = mlx_texture_to_image(g->mlx, g->death.tab_t[21]);
	if (!g->death.tab[21])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[22] = mlx_load_png("assets/death23.png");
	if (!g->death.tab_t[22])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[22] = mlx_texture_to_image(g->mlx, g->death.tab_t[22]);
	if (!g->death.tab[22])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[23] = mlx_load_png("assets/death24.png");
	if (!g->death.tab_t[23])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[23] = mlx_texture_to_image(g->mlx, g->death.tab_t[23]);
	if (!g->death.tab[23])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[24] = mlx_load_png("assets/death25.png");
	if (!g->death.tab_t[24])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[24] = mlx_texture_to_image(g->mlx, g->death.tab_t[24]);
	if (!g->death.tab[24])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[25] = mlx_load_png("assets/death26.png");
	if (!g->death.tab_t[25])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[25] = mlx_texture_to_image(g->mlx, g->death.tab_t[25]);
	if (!g->death.tab[25])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[26] = mlx_load_png("assets/death27.png");
	if (!g->death.tab_t[26])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[26] = mlx_texture_to_image(g->mlx, g->death.tab_t[26]);
	if (!g->death.tab[26])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[27] = mlx_load_png("assets/death28.png");
	if (!g->death.tab_t[27])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[27] = mlx_texture_to_image(g->mlx, g->death.tab_t[27]);
	if (!g->death.tab[27])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[28] = mlx_load_png("assets/death29.png");
	if (!g->death.tab_t[28])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[28] = mlx_texture_to_image(g->mlx, g->death.tab_t[28]);
	if (!g->death.tab[28])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.tab_t[29] = mlx_load_png("assets/death30.png");
	if (!g->death.tab_t[29])
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.tab[29] = mlx_texture_to_image(g->mlx, g->death.tab_t[29]);
	if (!g->death.tab[29])
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	g->death.d_screen_t = mlx_load_png("assets/died_screen.png");
	if (!g->death.d_screen_t)
		exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
	g->death.d_screen = mlx_texture_to_image(g->mlx, g->death.d_screen_t);
	if (!g->death.d_screen)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	mlx_image_to_window(g->mlx, g->death.d_screen, 0, 0);
	g->death.d_screen->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[0], 750, 750);
		g->death.tab[0]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[1], 750, 750);
		g->death.tab[1]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[2], 750, 750);
		g->death.tab[2]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[3], 750, 750);
		g->death.tab[3]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[4], 750, 750);
		g->death.tab[4]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[5], 750, 750);
		g->death.tab[5]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[6], 750, 750);
		g->death.tab[6]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[7], 750, 750);
		g->death.tab[7]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[8], 750, 750);
		g->death.tab[8]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[9], 750, 750);
		g->death.tab[9]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[10], 750, 750);
		g->death.tab[10]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[11], 750, 750);
		g->death.tab[11]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[12], 750, 750);
		g->death.tab[12]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[13], 750, 750);
		g->death.tab[13]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[14], 750, 750);
		g->death.tab[14]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[15], 750, 750);
		g->death.tab[15]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[16], 750, 750);
		g->death.tab[16]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[17], 750, 750);
		g->death.tab[17]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[18], 750, 750);
		g->death.tab[18]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[19], 750, 750);
		g->death.tab[19]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[20], 750, 750);
		g->death.tab[20]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[21], 750, 750);
		g->death.tab[21]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[22], 750, 750);
		g->death.tab[22]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[23], 750, 750);
		g->death.tab[23]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[24], 750, 750);
		g->death.tab[24]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[25], 750, 750);
		g->death.tab[25]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[26], 750, 750);
		g->death.tab[26]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[27], 750, 750);
		g->death.tab[27]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[28], 750, 750);
		g->death.tab[28]->instances->enabled = false;
	mlx_image_to_window(g->mlx, g->death.tab[29], 750, 750);
		g->death.tab[29]->instances->enabled = false;
}

void	player_death(t_lo *g)
{
	g->death.tab[g->death.frame]->instances->enabled = true;
	if (g->death.frame > 0)
		g->death.tab[g->death.frame - 1]->instances->enabled = false;
	g->death.frame++;
	if (g->death.frame == 30)
		mlx_close_window(g->mlx);
}