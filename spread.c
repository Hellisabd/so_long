/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:54:00 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/20 17:23:55 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	spread_x(t_lo *g)
{
	if (g->map[g->y][g->x] == 'P' || g->map[g->y][g->x] == 'X')
	{
		if (g->map[g->y][g->x + 1] == '0' || g->map[g->y][g->x + 1] == 'C' /*|| g->map[g->y][g->x + 1] == 'D'*/)
			g->map[g->y][g->x + 1] = 'X';
		if (g->map[g->y][g->x - 1] == '0' || g->map[g->y][g->x - 1] == 'C' /*|| g->map[g->y][g->x - 1] == 'D'*/)
			g->map[g->y][g->x - 1] = 'X';
		if (g->map[g->y + 1][g->x] == '0' || g->map[g->y + 1][g->x] == 'C' /*|| g->map[g->y - 1][g->x] == 'D'*/)
			g->map[g->y + 1][g->x] = 'X';
		if (g->map[g->y - 1][g->x] == '0' || g->map[g->y - 1][g->x] == 'C' /*|| g->map[g->y + 1][g->x] == 'D'*/)
			g->map[g->y - 1][g->x] = 'X';
	}
}

void	spread_y(t_lo *g)
{
	if (g->map[g->y][g->x] == 'E' || g->map[g->y][g->x] == 'Y')
	{
		if (g->map[g->y][g->x + 1] == '0' || g->map[g->y][g->x + 1] == 'C' /*|| g->map[g->y][g->x + 1] == 'D'*/)
			g->map[g->y][g->x + 1] = 'Y';
		if (g->map[g->y][g->x - 1] == '0' || g->map[g->y][g->x - 1] == 'C' /*|| g->map[g->y][g->x - 1] == 'D'*/)
			g->map[g->y][g->x - 1] = 'Y';
		if (g->map[g->y + 1][g->x] == '0' || g->map[g->y + 1][g->x] == 'C' /*|| g->map[g->y + 1][g->x] == 'D'*/)
			g->map[g->y + 1][g->x] = 'Y';
		if (g->map[g->y - 1][g->x] == '0' || g->map[g->y - 1][g->x] == 'C' /*|| g->map[g->y - 1][g->x] == 'D'*/)
			g->map[g->y - 1][g->x] = 'Y';
	}
}

bool	check_c_left(t_lo *g, char c)
{
	int	i;
	int	j;

	i = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if ((g->map[i][j] == 'P' || g->map[i][j] == 'X'
				|| g->map[i][j] == 'Y' || g->map[i][j] == 'E')
				&& (g->map[i + 1][j] == c
				|| g->map[i - 1][j] == c || g->map[i][j + 1] == c
				|| g->map[i][j - 1] == c))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	check_c_left2(t_lo *g, char c)
{
	int	i;
	int	j;

	i = 0;
	while (g->map[i])
	{
		j = 0;
		while (g->map[i][j])
		{
			if (g->map[i][j] == c)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
