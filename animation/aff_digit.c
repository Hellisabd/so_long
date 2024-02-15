/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:11:50 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 18:42:45 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	delete_digit(t_lo *g)
{
	mlx_delete_image(g->mlx, g->score.s0);
	mlx_delete_image(g->mlx, g->score.s1);
	mlx_delete_image(g->mlx, g->score.s2);
	mlx_delete_image(g->mlx, g->score.s3);
	mlx_delete_image(g->mlx, g->score.s4);
	mlx_delete_image(g->mlx, g->score.s5);
	mlx_delete_image(g->mlx, g->score.s6);
	mlx_delete_image(g->mlx, g->score.s7);
	mlx_delete_image(g->mlx, g->score.s8);
	mlx_delete_image(g->mlx, g->score.s9);
}

void    aff_first(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window((g->delete_i[0] = 0, g->mlx), g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window((g->delete_i[0] = 1, g->mlx), g->score.s1, x, 0);
	if (c == '2')
		mlx_image_to_window((g->delete_i[0] = 2, g->mlx), g->score.s2, x, 0);
	if (c == '3')
		mlx_image_to_window((g->delete_i[0] = 3, g->mlx), g->score.s3, x, 0);
	if (c == '4')
		mlx_image_to_window((g->delete_i[0] = 4, g->mlx), g->score.s4, x, 0);
	if (c == '5')
		mlx_image_to_window((g->delete_i[0] = 5, g->mlx), g->score.s5, x, 0);
	if (c == '6')
		mlx_image_to_window((g->delete_i[0] = 6, g->mlx), g->score.s6, x, 0);
	if (c == '7')
		mlx_image_to_window((g->delete_i[0] = 7, g->mlx), g->score.s7, x, 0);
	if (c == '8')
		mlx_image_to_window((g->delete_i[0] = 8, g->mlx), g->score.s8, x, 0);
	if (c == '9')
		mlx_image_to_window((g->delete_i[0] = 9, g->mlx), g->score.s9, x, 0);
	g->delete_i[1] = -1;
	g->delete_i[2] = -1;
}

void    aff_second(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window(g->mlx, g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window(g->mlx, g->score.s1, x, 0);
	if (c == '2')
		mlx_image_to_window(g->mlx, g->score.s2, x, 0);
	if (c == '3')
		mlx_image_to_window(g->mlx, g->score.s3, x, 0);
	if (c == '4')
		mlx_image_to_window(g->mlx, g->score.s4, x, 0);
	if (c == '5')
		mlx_image_to_window(g->mlx, g->score.s5, x, 0);
	if (c == '6')
		mlx_image_to_window(g->mlx, g->score.s6, x, 0);
	if (c == '7')
		mlx_image_to_window(g->mlx, g->score.s7, x, 0);
	if (c == '8')
		mlx_image_to_window(g->mlx, g->score.s8, x, 0);
	if (c == '9')
		mlx_image_to_window(g->mlx, g->score.s9, x, 0);
	g->delete_i[2] = -1;
}

void    aff_third(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window(g->mlx, g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window(g->mlx, g->score.s1, x, 0);
	if (c == '2')
		mlx_image_to_window(g->mlx, g->score.s2, x, 0);
	if (c == '3')
		mlx_image_to_window(g->mlx, g->score.s3, x, 0);
	if (c == '4')
		mlx_image_to_window(g->mlx, g->score.s4, x, 0);
	if (c == '5')
		mlx_image_to_window(g->mlx, g->score.s5, x, 0);
	if (c == '6')
		mlx_image_to_window(g->mlx, g->score.s6, x, 0);
	if (c == '7')
		mlx_image_to_window(g->mlx, g->score.s7, x, 0);
	if (c == '8')
		mlx_image_to_window(g->mlx, g->score.s8, x, 0);
	if (c == '9')
		mlx_image_to_window(g->mlx, g->score.s9, x, 0);
}
