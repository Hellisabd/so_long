/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_score.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:13:32 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 13:08:22 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	score_img_second(t_lo *g)
{
	g->score.ss0 = mlx_texture_to_image(g->mlx, g->score.s0_t);
	g->score.ss1 = mlx_texture_to_image(g->mlx, g->score.s1_t);
	g->score.ss2 = mlx_texture_to_image(g->mlx, g->score.s2_t);
	g->score.ss3 = mlx_texture_to_image(g->mlx, g->score.s3_t);
	g->score.ss4 = mlx_texture_to_image(g->mlx, g->score.s4_t);
	g->score.ss5 = mlx_texture_to_image(g->mlx, g->score.s5_t);
	g->score.ss6 = mlx_texture_to_image(g->mlx, g->score.s6_t);
	g->score.ss7 = mlx_texture_to_image(g->mlx, g->score.s7_t);
	g->score.ss8 = mlx_texture_to_image(g->mlx, g->score.s8_t);
	g->score.ss9 = mlx_texture_to_image(g->mlx, g->score.s9_t);
	if (!g->score.ss0 || !g->score.ss1 || !g->score.ss2 || !g->score.ss3
		|| !g->score.ss4 || !g->score.ss5 || !g->score.ss6 || !g->score.ss7
		|| !g->score.ss8 || !g->score.ss9)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss0, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss1, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss2, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.ss3, (WIDTH / 45) * 1.75, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	score_img_second1(g);
}

void	score_img_first1(t_lo *g)
{
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs4, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs5, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs6, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs7, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs8, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs9, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	g->score.fs0->instances->enabled = true;
	g->score.fs1->instances->enabled = false;
	g->score.fs2->instances->enabled = false;
	g->score.fs3->instances->enabled = false;
	g->score.fs4->instances->enabled = false;
	g->score.fs5->instances->enabled = false;
	g->score.fs6->instances->enabled = false;
	g->score.fs7->instances->enabled = false;
	g->score.fs8->instances->enabled = false;
	g->score.fs9->instances->enabled = false;
}

void	score_img_first(t_lo *g)
{
	g->score.fs0 = mlx_texture_to_image(g->mlx, g->score.s0_t);
	g->score.fs1 = mlx_texture_to_image(g->mlx, g->score.s1_t);
	g->score.fs2 = mlx_texture_to_image(g->mlx, g->score.s2_t);
	g->score.fs3 = mlx_texture_to_image(g->mlx, g->score.s3_t);
	g->score.fs4 = mlx_texture_to_image(g->mlx, g->score.s4_t);
	g->score.fs5 = mlx_texture_to_image(g->mlx, g->score.s5_t);
	g->score.fs6 = mlx_texture_to_image(g->mlx, g->score.s6_t);
	g->score.fs7 = mlx_texture_to_image(g->mlx, g->score.s7_t);
	g->score.fs8 = mlx_texture_to_image(g->mlx, g->score.s8_t);
	g->score.fs9 = mlx_texture_to_image(g->mlx, g->score.s9_t);
	if (!g->score.fs0 || !g->score.fs1 || !g->score.fs2 || !g->score.fs3
		|| !g->score.fs4 || !g->score.fs5 || !g->score.fs6 || !g->score.fs7
		|| !g->score.fs8 || !g->score.fs9)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs0, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs1, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs2, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	if (-1 == mlx_image_to_window(g->mlx, g->score.fs3, 0, 0))
		exit((ft_printf("Error\nimage to window\n"), d_a(g), EXIT_FAILURE));
	score_img_first1(g);
}

void	set_score1(t_lo *g)
{
	g->score.s0_t = mlx_load_png("assets/0.png");
	g->score.s1_t = mlx_load_png("assets/1.png");
	g->score.s2_t = mlx_load_png("assets/2.png");
	g->score.s3_t = mlx_load_png("assets/3.png");
	g->score.s4_t = mlx_load_png("assets/4.png");
	g->score.s5_t = mlx_load_png("assets/5.png");
	g->score.s6_t = mlx_load_png("assets/6.png");
	g->score.s7_t = mlx_load_png("assets/7.png");
	g->score.s8_t = mlx_load_png("assets/8.png");
	g->score.s9_t = mlx_load_png("assets/9.png");
	if (!g->score.s0_t || !g->score.s1_t || !g->score.s2_t || !g->score.s3_t
		|| !g->score.s4_t || !g->score.s5_t || !g->score.s6_t || !g->score.s7_t
		|| !g->score.s8_t || !g->score.s9_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	score_img_first(g);
	score_img_second(g);
	score_img_third(g);
}

void	aff_score(t_lo *g)
{
	char	*str;
	int		size;

	str = ft_itoa(g->score.count_move);
	size = ft_strlen(str);
	if (size == 1)
	{
		delete_digit(g);
		aff_first(g, str[0]);
	}
	else if (size == 2)
	{
		delete_digit(g);
		aff_first(g, str[0]);
		aff_second(g, str[1]);
	}
	else if (size == 3)
	{
		delete_digit(g);
		aff_first(g, str[0]);
		aff_second(g, str[1]);
		aff_third(g, str[2]);
	}
	free (str);
}
