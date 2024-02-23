/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_score2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:07:46 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 13:11:54 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	score_img_third1(t_lo *g)
{
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts4, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts5, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts6, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts7, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts8, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts9, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->score.ts0->instances->enabled = true;
	g->score.ts1->instances->enabled = false;
	g->score.ts2->instances->enabled = false;
	g->score.ts3->instances->enabled = false;
	g->score.ts4->instances->enabled = false;
	g->score.ts5->instances->enabled = false;
	g->score.ts6->instances->enabled = false;
	g->score.ts7->instances->enabled = false;
	g->score.ts8->instances->enabled = false;
	g->score.ts9->instances->enabled = false;
}

void	score_img_third(t_lo *g)
{
	g->score.ts0 = mlx_texture_to_image(g->mlx, g->score.s0_t);
	g->score.ts1 = mlx_texture_to_image(g->mlx, g->score.s1_t);
	g->score.ts2 = mlx_texture_to_image(g->mlx, g->score.s2_t);
	g->score.ts3 = mlx_texture_to_image(g->mlx, g->score.s3_t);
	g->score.ts4 = mlx_texture_to_image(g->mlx, g->score.s4_t);
	g->score.ts5 = mlx_texture_to_image(g->mlx, g->score.s5_t);
	g->score.ts6 = mlx_texture_to_image(g->mlx, g->score.s6_t);
	g->score.ts7 = mlx_texture_to_image(g->mlx, g->score.s7_t);
	g->score.ts8 = mlx_texture_to_image(g->mlx, g->score.s8_t);
	g->score.ts9 = mlx_texture_to_image(g->mlx, g->score.s9_t);
	if (!g->score.fs0 || !g->score.fs1 || !g->score.fs2 || !g->score.fs3
		|| !g->score.fs4 || !g->score.fs5 || !g->score.fs6 || !g->score.fs7
		|| !g->score.fs8 || !g->score.fs9)
		exit((ft_printf("Error\nloading texture to image\n"), \
		d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts0, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts1, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts2, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ts3, (WIDTH / 45) * 3.5, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	score_img_third1(g);
}

void	score_img_second1(t_lo *g)
{
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss4, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss5, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss6, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss7, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss8, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss9, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->score.ss0->instances->enabled = true;
	g->score.ss1->instances->enabled = false;
	g->score.ss2->instances->enabled = false;
	g->score.ss3->instances->enabled = false;
	g->score.ss4->instances->enabled = false;
	g->score.ss5->instances->enabled = false;
	g->score.ss6->instances->enabled = false;
	g->score.ss7->instances->enabled = false;
	g->score.ss8->instances->enabled = false;
	g->score.ss9->instances->enabled = false;
}
