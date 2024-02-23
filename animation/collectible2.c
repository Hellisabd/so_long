/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectible2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:05:21 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:18:57 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_collectible2(t_lo *g, int x, int y)
{
	if ((g->map[y][x] == 'D' && g->data_p.weapon != 2)
		|| g->score.count_move >= 999)
		g->death.death = 1;
	else if (g->map[y][x] == 'D' && g->data_p.weapon == 2)
	{
		g->ennemie1_alive = 0;
		g->map[y][x] = '0';
		g->count_coll--;
		mlx_delete_image(g->mlx, g->sprite.ennemiesl1);
		mlx_delete_image(g->mlx, g->sprite.ennemiesr1);
	}
	if ((g->map[y][x] == 'H' && g->data_p.holy != 1))
		g->death.death = 1;
	else if (g->map[y][x] == 'H' && g->data_p.holy == 1)
	{
		g->ennemie2_alive = 0;
		g->map[y][x] = '0';
		g->count_coll--;
		mlx_delete_image(g->mlx, g->sprite.ennemiesl2);
		mlx_delete_image(g->mlx, g->sprite.ennemiesr2);
	}
}

void	check_collectible1(t_lo *g, int x, int y)
{
	if (g->map[y][x] == 'W')
	{
		g->map[y][x] = '0';
		g->data_p.weapon += 1;
		g->data_p.sword = 1;
		g->count_coll--;
		g->data_p.tab[0]->instances->enabled = false;
		g->data_p.tab[1]->instances->enabled = false;
		g->data_p.tab[2]->instances->enabled = false;
		g->data_p.tab[3]->instances->enabled = false;
		g->data_p.tab[4]->instances->enabled = false;
		g->data_p.tab[5]->instances->enabled = false;
		g->data_p.tab_w[g->data_p.frame]->instances->enabled = true;
	}
	if (g->map[y][x] == 'J')
	{
		g->map[y][x] = '0';
		mlx_delete_image((g->count_coll--, g->mlx), g->sprite.c3);
	}
	if (g->map[y][x] == 'e')
	{
		g->success = 1;
		mlx_image_to_window(g->mlx, g->sprite.success, 0, 0);
	}
}

int	replace_coll(t_lo *g, int replace, int y, int x)
{
	if (g->map[y][x] == 'C' && replace == 0)
	{
		g->map[y][x] = 'S';
		replace++;
	}
	if (g->map[y][x] == 'C' && replace == 1)
	{
		g->map[y][x] = 'W';
		replace++;
	}
	if (g->map[y][x] == 'C' && replace == 2)
	{
		g->map[y][x] = 'J';
		replace++;
	}
	if (g->map[y][x] == 'C')
		replace++;
	return (replace);
}

int	integr_coll(t_lo *g)
{
	int		x;
	int		y;
	int		replace;

	y = 1;
	replace = 0;
	while (g->map[y])
	{
		x = 1;
		while (g->map[y][x])
		{
			replace = replace_coll(g, replace, y, x);
			x++;
		}
		y++;
	}
	if (replace > 3)
		exit((ft_free_tab(g->map), ft_printf("Error\nToo many collectible"), 1));
	return (replace);
}
