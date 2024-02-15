/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_score.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:13:32 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 17:15:53 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    resize_score(t_lo *g)
{
	float	m;

	m = 1,818181818;
	g->score.s0 = mlx_resize_image(g->score.s0_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s1 = mlx_resize_image(g->score.s1_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s2 = mlx_resize_image(g->score.s2_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s3 = mlx_resize_image(g->score.s3_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s4 = mlx_resize_image(g->score.s4_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s5 = mlx_resize_image(g->score.s5_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s6 = mlx_resize_image(g->score.s6_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s7 = mlx_resize_image(g->score.s7_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s8 = mlx_resize_image(g->score.s8_t, WIDTH / 30, (WIDTH / 30 / m));
	g->score.s9 = mlx_resize_image(g->score.s9_t, WIDTH / 30, (WIDTH / 30 / m));
}

void    set_score1(t_lo *g)
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
	if (!g->score.s0_t || !g->score.s1_t || !g->score.s2_t || !g->score.s3_t || !g->score.s4_t || !g->score.s5_t || !g->score.s6_t || !g->score.s7_t || !g->score.s8_t || !g->score.s9_t)
		exit ((ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->score.s0 = mlx_texture_to_image(g->mlx, g->score.s0_t);
	g->score.s1 = mlx_texture_to_image(g->mlx, g->score.s1_t);
	g->score.s2 = mlx_texture_to_image(g->mlx, g->score.s2_t);
	g->score.s3 = mlx_texture_to_image(g->mlx, g->score.s3_t);
	g->score.s4 = mlx_texture_to_image(g->mlx, g->score.s4_t);
	g->score.s5 = mlx_texture_to_image(g->mlx, g->score.s5_t);
	g->score.s6 = mlx_texture_to_image(g->mlx, g->score.s6_t);
	g->score.s7 = mlx_texture_to_image(g->mlx, g->score.s7_t);
	g->score.s8 = mlx_texture_to_image(g->mlx, g->score.s8_t);
	g->score.s9 = mlx_texture_to_image(g->mlx, g->score.s9_t);
	if (!g->score.s0 || !g->score.s1 || !g->score.s2 || !g->score.s3 || !g->score.s4 || !g->score.s5 || !g->score.s6 || !g->score.s7 || !g->score.s8 || !g->score.s9)
		exit((ft_printf("Error\nloading texture to image\n"), EXIT_FAILURE));
	resize_score(g);
}

void    aff_score(t_lo *g)
{
	char	*str;
	int		size;
	
	str = ft_itoa(g->count_coll);
	size = ft_strlen(str);
	if (size == 1)
	{
		aff_unit(g, str[0], 0);
	}
	else if(size == 2)
	{
		aff_unit(g, str[1], (WIDTH / 30) * 2);
		aff_diz(g, str[0], (WIDTH / 30));
	}
	else if (size == 3)
	{
		aff_unit(g, str[2], (WIDTH / 30) * 3);
		aff_diz(g, str[1], (WIDTH / 30) * 2);
		aff_cent(g, str[0]);
	}
}