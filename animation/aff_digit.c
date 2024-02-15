/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:11:50 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/15 17:37:44 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    aff_unit(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window((g->delete_i[0] = 0, g->mlx), g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window((g->delete_i[0] = 1, g->mlx), g->score.s0, x, 0);
	if (c == '2')
		mlx_image_to_window((g->delete_i[0] = 2, g->mlx), g->score.s0, x, 0);
	if (c == '3')
		mlx_image_to_window((g->delete_i[0] = 3, g->mlx), g->score.s0, x, 0);
	if (c == '4')
		mlx_image_to_window((g->delete_i[0] = 4, g->mlx), g->score.s0, x, 0);
	if (c == '5')
		mlx_image_to_window((g->delete_i[0] = 5, g->mlx), g->score.s0, x, 0);
	if (c == '6')
		mlx_image_to_window((g->delete_i[0] = 6, g->mlx), g->score.s0, x, 0);
	if (c == '7')
		mlx_image_to_window((g->delete_i[0] = 7, g->mlx), g->score.s0, x, 0);
	if (c == '8')
		mlx_image_to_window((g->delete_i[0] = 8, g->mlx), g->score.s0, x, 0);
	if (c == '9')
		mlx_image_to_window((g->delete_i[0] = 9, g->mlx), g->score.s0, x, 0);
	g->delete_i[1] = -1;
	g->delete_i[2] = -1;
}

void    aff_diz(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window((g->delete_i[1] = 0, g->mlx), g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window((g->delete_i[1] = 1, g->mlx), g->score.s0, x, 0);
	if (c == '2')
		mlx_image_to_window((g->delete_i[1] = 2, g->mlx), g->score.s0, x, 0);
	if (c == '3')
		mlx_image_to_window((g->delete_i[1] = 3, g->mlx), g->score.s0, x, 0);
	if (c == '4')
		mlx_image_to_window((g->delete_i[1] = 4, g->mlx), g->score.s0, x, 0);
	if (c == '5')
		mlx_image_to_window((g->delete_i[1] = 5, g->mlx), g->score.s0, x, 0);
	if (c == '6')
		mlx_image_to_window((g->delete_i[1] = 6, g->mlx), g->score.s0, x, 0);
	if (c == '7')
		mlx_image_to_window((g->delete_i[1] = 7, g->mlx), g->score.s0, x, 0);
	if (c == '8')
		mlx_image_to_window((g->delete_i[1] = 8, g->mlx), g->score.s0, x, 0);
	if (c == '9')
		mlx_image_to_window((g->delete_i[1] = 9, g->mlx), g->score.s0, x, 0);
	g->delete_i[2] = -1;
}

void    aff_cent(t_lo *g, char c, int x)
{
	if (c == '0')
		mlx_image_to_window((g->delete_i[2] = 0, g->mlx), g->score.s0, x, 0);
	if (c == '1')
		mlx_image_to_window((g->delete_i[2] = 1, g->mlx), g->score.s0, x, 0);
	if (c == '2')
		mlx_image_to_window((g->delete_i[2] = 2, g->mlx), g->score.s0, x, 0);
	if (c == '3')
		mlx_image_to_window((g->delete_i[2] = 3, g->mlx), g->score.s0, x, 0);
	if (c == '4')
		mlx_image_to_window((g->delete_i[2] = 4, g->mlx), g->score.s0, x, 0);
	if (c == '5')
		mlx_image_to_window((g->delete_i[2] = 5, g->mlx), g->score.s0, x, 0);
	if (c == '6')
		mlx_image_to_window((g->delete_i[2] = 6, g->mlx), g->score.s0, x, 0);
	if (c == '7')
		mlx_image_to_window((g->delete_i[2] = 7, g->mlx), g->score.s0, x, 0);
	if (c == '8')
		mlx_image_to_window((g->delete_i[2] = 8, g->mlx), g->score.s0, x, 0);
	if (c == '9')
		mlx_image_to_window((g->delete_i[2] = 9, g->mlx), g->score.s0, x, 0);
}
