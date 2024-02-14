/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coll.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:53:05 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 10:34:48 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_collectible(t_lo *g)
{
	int	tmp_x;
	int	tmp_y;
	int	tmp_p_pos;
	int	j;

	j = 1;
	tmp_p_pos = g->data_p.player_pos_x;
	tmp_x = g->data_p.player_size_x + g->data_p.player_pos_x;
	tmp_y = g->data_p.player_size_y + g->data_p.player_pos_y;
	g->data_p.player_pos_x = tmp_p_pos;
	while (g->data_p.player_pos_y < tmp_y && g->h_m.hidden_map[g->data_p.player_pos_y])
	{
		g->data_p.player_pos_x = tmp_p_pos;
		while (g->data_p.player_pos_x < tmp_x)
		{
			if (g->h_m.hidden_map[g->data_p.player_pos_y][g->data_p.player_pos_x] == 'C')
				break;
			g->data_p.player_pos_x++;
		}
		g->data_p.player_pos_y++;
	}
	if (g->h_m.hidden_map[g->data_p.player_pos_y][g->data_p.player_pos_x] == 'S' && j != 0)
	{
		// g->data_p.p_speed *= 2;
		j = 0;
		// mlx_delete_texture(g->sprite.c_speed_t);
		// mlx_delete_image(g->mlx, g->sprite.c_speed);
		g->del.x = 1 + round(g->data_p.player_pos_x / (WIDTH / (g->width)));
		g->del.y = round(g->data_p.player_pos_y / (HEIGHT / (g->height)));
		printf("%d\n%d\n", g->del.x, g->del.y);
		delete_c(g, 'C');
		get_sprite_pos_coll(g, '0', &g->coll1, g->aff_coll.c);
	}
}

void    set_coll(t_lo *g)
{
	float	m;
	int		size_x;
	int		size_y;
	int		pos_x;
	int		pos_y;

	m = 1.516981132;
	size_x = (WIDTH / 30);
	size_y = size_x / m;
	pos_y = g->div_wall_y;
	g->x = 1;
	g->y = 1;
	while (g->y < (size_t)g->height - 1 && g->map[g->y])
	{
		pos_x = g->div_wall_x;
		g->x = 1;
		while (g->x < (size_t)g->width - 2)
		{
			if (g->nb_coll == 0)
				g->aff_coll = g->coll1;
			if (g->nb_coll == 1)
				g->aff_coll = g->coll2;
			if (g->nb_coll == 2)
				g->aff_coll = g->coll3;
			if (g->map[g->y][g->x] == g->aff_coll.c && g->map[g->y][g->x])
			{
				g->sprite.c_speed_t = mlx_load_png(g->aff_coll.path);
				if (!g->sprite.c_speed_t)
					exit ((ft_printf("Error loading speed PNG\n"), EXIT_FAILURE));
				g->sprite.c_speed = mlx_texture_to_image(g->mlx, g->sprite.c_speed_t);
				if (!g->sprite.c_speed)
					exit((ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
				if (!mlx_resize_image(g->sprite.c_speed, size_x, size_y))
					exit ((ft_printf("Error resizing collectible\n"), EXIT_FAILURE));
				if (-1 == mlx_image_to_window(g->mlx, g->sprite.c_speed, pos_x, pos_y + (g->div_wall_y)))
					exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
				g->aff_coll.start_x = pos_x;
				g->aff_coll.start_y = pos_y + (g->div_wall_y);
				g->aff_coll.end_x = g->coll1.start_x + size_x;
				g->aff_coll.end_y = g->coll1.start_y + size_y;
				get_sprite_pos_coll(g, g->aff_coll.c, &g->aff_coll, '0');
				g->nb_coll++;
			}
			pos_x += g->div_wall_x;
			g->x++;
		}
		g->y++;
		pos_y += g->div_wall_y;
	}
	g->y = 0;
	while (g->map[g->y])
	{
		printf("%s", g->map[g->y]);
		g->y++;
	}
}

void	integr_coll(t_lo *g)
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
			x++;
			if (replace == 3)
				break ;
		}
		y++;
	}
}
