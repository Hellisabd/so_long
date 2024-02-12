/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:38:33 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/12 13:18:58 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    set_lwall(t_lo *g)
{
	int i;
	int pos_y;
	float m;

	i = 0;
	m = 5.597014925;
	pos_y = 0;
	g->sprite.lwall_t = mlx_load_png("assets/l_wall.png");
	if (!g->sprite.lwall_t)
		exit ((destroy_all(g) ,ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.lwall = mlx_texture_to_image(g->mlx, g->sprite.lwall_t);
	if (!g->sprite.lwall)
		exit((destroy_all(g) ,ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.lwall, (g->div_wall_y / m), g->div_wall_y))
		exit ((ft_printf("Error resizing Wall\n"), EXIT_FAILURE));
	while (i < g->height)
	{
		if (-1 == mlx_image_to_window(g->mlx, g->sprite.lwall, 0, pos_y))
			exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
		g->h_m.start_x = 0;
		g->h_m.start_y = pos_y;
		g->h_m.end_x = g->h_m.start_x + (g->div_wall_y / m);
		g->h_m.end_y = g->h_m.start_y + g->div_wall_y;
		get_sprite_pos(g);
		pos_y += g->div_wall_y;
		i++;
	}
}

void    set_rwall(t_lo *g)
{
	int i;
	int pos_y;
	float m;

	i = 0;
	m = 5.597014925;
	g->div_wall_y = HEIGHT / g->height; 
	pos_y = 0;
	g->sprite.rwall_t = mlx_load_png("assets/r_wall.png");
	if (!g->sprite.rwall_t)
		exit ((destroy_all(g) ,ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.rwall = mlx_texture_to_image(g->mlx, g->sprite.rwall_t);
	if (!g->sprite.rwall)
		exit((destroy_all(g) ,ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.rwall, (g->div_wall_y / m), g->div_wall_y))
		exit ((ft_printf("Error resizing Wall\n"), EXIT_FAILURE));
	while (i < g->height)
	{
		if (-1 == mlx_image_to_window(g->mlx, g->sprite.rwall, (WIDTH - (g->div_wall_y / m)), pos_y))
			exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
		g->h_m.start_x = (WIDTH - (g->div_wall_y / m));
		g->h_m.start_y = pos_y;
		g->h_m.end_x = g->h_m.start_x + (g->div_wall_y / m);
		g->h_m.end_y = g->h_m.start_y + g->div_wall_y;
		get_sprite_pos(g);
		pos_y += g->div_wall_y;
		i++;
	}
}

void    set_uwall(t_lo *g)
{
	int i;
	int pos_x;
	float m;

	i = 0;
	m = 5.597014925;
	g->div_wall_x = WIDTH / (g->width - 1); 
	ft_printf("g->div_wall_x : %d\n", g->div_wall_x);
	pos_x = 0;
	g->sprite.uwall_t = mlx_load_png("assets/up_wall.png");
	if (!g->sprite.uwall_t)
		exit ((destroy_all(g) ,ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.uwall = mlx_texture_to_image(g->mlx, g->sprite.uwall_t);
	if (!g->sprite.uwall)
		exit((destroy_all(g) ,ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.uwall, g->div_wall_x, (g->div_wall_x / m)))
		exit ((ft_printf("Error resizing Wall\n"), EXIT_FAILURE));
	while (i < g->width)
	{
		if (-1 == mlx_image_to_window(g->mlx, g->sprite.uwall, pos_x, 0))
			exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
		g->h_m.start_x = pos_x;
		g->h_m.start_y = 0;
		g->h_m.end_x = g->h_m.start_x + g->div_wall_x;
		g->h_m.end_y = g->h_m.start_y + (g->div_wall_x / m);
		get_sprite_pos(g);
		i++;
		pos_x += g->div_wall_x;
	}
}

void    set_dwall(t_lo *g)
{
	int i;
	int pos_x;
	float m;

	i = 0;
	m = 5.597014925;
	pos_x = 0;
	g->sprite.dwall_t = mlx_load_png("assets/d_wall.png");
	if (!g->sprite.dwall_t)
		exit ((destroy_all(g) ,ft_printf("Error loading PNG\n"), EXIT_FAILURE));
	g->sprite.dwall = mlx_texture_to_image(g->mlx, g->sprite.dwall_t);
	if (!g->sprite.dwall)
		exit((destroy_all(g) ,ft_printf("Error during loading texture to image\n"), EXIT_FAILURE));
	if (!mlx_resize_image(g->sprite.dwall, g->div_wall_x, (g->div_wall_x / m)))
		exit ((ft_printf("Error resizing Wall\n"), EXIT_FAILURE));
	while (i < g->width)
	{
		if (-1 == mlx_image_to_window(g->mlx, g->sprite.dwall, pos_x, (HEIGHT - (g->div_wall_x / m))))
			exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
		i++;
		g->h_m.start_x = pos_x;
		g->h_m.start_y = HEIGHT - (g->div_wall_x / m);
		g->h_m.end_x = g->h_m.start_x + g->div_wall_x;
		g->h_m.end_y = g->h_m.start_y + (g->div_wall_x / m);
		get_sprite_pos(g);
		pos_x += g->div_wall_x;
	}
	// ft_printf("%s", g->h_m.hidden_map[0]);
}

void    set_walls(t_lo *g)
{
	int	pos_x;
	int	pos_y;

	set_uwall(g);
	set_rwall(g);
	set_lwall(g);
	set_dwall(g);
	// int i = 30;
	// while (i < 1230)
	// {
	// 	ft_printf("%s\n", g->h_m.hidden_map[i]);
	// 	i++;
	// }
	pos_y = g->div_wall_y;
	g->y = 1;
	while (g->y < (size_t)g->height - 1)
	{
		g->x = 1;
		pos_x = g->div_wall_x;
		while (g->x < (size_t)g->width - 2)
		{
			if (g->map[g->y][g->x] == '1')
			{
				if (-1 == mlx_image_to_window(g->mlx, g->sprite.dwall, pos_x, (pos_y + (g->div_wall_y / 2))))
					exit ((destroy_all(g), ft_printf("Error during passing image to window\n", 1)));
				g->h_m.start_x = pos_x;
				g->h_m.start_y = (pos_y + (g->div_wall_y / 2));
				g->h_m.end_x = g->h_m.start_x + g->div_wall_x;
				g->h_m.end_y = g->h_m.start_y + (g->div_wall_x / 5.597014925);
				get_sprite_pos(g);
			}
			pos_x += g->div_wall_x;
			g->x++;
		}
		g->y++;
		pos_y += g->div_wall_y;
	}
}
