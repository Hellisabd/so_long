/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:16:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/09 18:06:42 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"

#define WIDTH 2000
#define HEIGHT 1250

typedef struct s_sprite
{
	mlx_texture_t   *back_t;
	mlx_texture_t   *player_t;
	mlx_texture_t   *uwall_t;
	mlx_texture_t   *rwall_t;
	mlx_texture_t   *lwall_t;
	mlx_texture_t   *dwall_t;
	mlx_image_t  *background;
	mlx_image_t  *player;
	mlx_image_t  *uwall;
	mlx_image_t  *rwall;
	mlx_image_t  *lwall;
	mlx_image_t  *dwall;
}	t_sprite;

typedef struct s_hidden
{
	int		**hidden_map;
	int		start_y;
	int		end_y;
	int		start_x;
	int		end_x;		
} t_hidden;

typedef struct s_data_p
{
	int32_t	player_pos_y;
	int32_t	player_pos_x;
	int32_t	player_size_x;
	int32_t	player_size_y;
	
} t_data_p;

typedef struct s_lo
{
	int		player;
	int		exit;
	int		coll;
	char	**map;
	size_t	x;
	size_t	y;
	int		p_x;
	int		p_y;
	int		e_x;
	int		e_y;
	mlx_t	*mlx;
	t_sprite sprite;
	int		height;
	int		width;
	int		div_wall_x;
	t_data_p	data_p;
	int		div_wall_y;
	t_hidden	h_m;
}	t_lo;

typedef struct s_pars
{
	char	*line;
	size_t	s_line;
	size_t	height;
	size_t	length;
}	t_pars;


int		check_infos(t_lo *game);
bool	check_c_left(t_lo *g, char c);
bool	check_c_left2(t_lo *g, char c);
void	check_valid_exit(t_lo *g);
void	spread_x(t_lo *g);
void	spread_y(t_lo *g);
void	open_window(t_lo *g);
void	ft_count_line(char *file, t_pars *pars);
void	check_walls(t_pars *pars, t_lo *game);
void	map_cpy(t_pars *pars, char *file, t_lo *game);
void	parsing_map(char *file, t_pars *pars, t_lo *game);
void    destroy_all(t_lo *g);

//GRAPHISMS

void    set_background(t_lo *g);
void    set_player(t_lo *g);
void    set_walls(t_lo *g);

//Secrets

void    hidden_map(t_lo *g);
void    get_sprite_pos(t_lo *g);

#endif