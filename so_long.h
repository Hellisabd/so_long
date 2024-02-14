/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:16:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/14 17:54:41 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"
# include "math.h"

#define WIDTH 2000
#define HEIGHT 2000

typedef struct s_sprite
{
	mlx_texture_t   *back_t;
	mlx_texture_t   *player_t;
	mlx_texture_t   *wall_t;
	mlx_texture_t   *c1_t;
	mlx_texture_t   *c2_t;
	mlx_texture_t   *c3_t;
	mlx_texture_t   *exit_t;
	mlx_texture_t   *ennemies_t;
	mlx_image_t  *background;
	mlx_image_t  *player;
	mlx_image_t  *wall;
	mlx_image_t  *exit;
	mlx_image_t  *c1;
	mlx_image_t  *c2;
	mlx_image_t  *c3;
	mlx_image_t  *ennemies;
}	t_sprite;

typedef struct s_hidden
{
	char		**hidden_map;
	int		start_y;
	int		end_y;
	int		start_x;
	int		end_x;		
} t_hidden;

typedef struct s_del
{
	float	f_x;
	float	f_y;
	int	x;
	int	y;
} t_del;

typedef struct s_data_p
{
	int32_t	player_pos_y;
	int32_t	player_pos_x;
	int32_t	player_size_x;
	int32_t	player_size_y;
	int		p_speed;
	
} t_data_p;

// typedef struct s_coll
// {
// 	char	c;
// 	char	*path;
// 	int		size_x;
// 	int		size_y;
// 	int		start_x;
// 	int		start_y;
// 	int		end_x;
// 	int		end_y;
// }	t_coll;

typedef struct s_lo
{
	int		player;
	int		exit;
	int		coll;
	int		nb_coll;
	int		count_move;
	char	**map;
	size_t	x;
	size_t	y;
	float		size_block_x;
	float		size_block_y;
	int		p_x;
	int		p_y;
	int		e_x;
	int		e_y;
	mlx_t	*mlx;
	t_sprite sprite;
	int		height;
	int		width;
	t_data_p	data_p;
	mlx_image_t  *str_screen;
	t_del		del;
	int			count_coll;
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
void    set_coll(t_lo *g);
void    set_exit(t_lo *g);
void    aff_exit(t_lo *g);

//Secrets

int	integr_coll(t_lo *g);

//COLLISIONS

void	check_collectible(t_lo *g);
void	delete_c(t_lo *g);
bool	check_collosion_up(t_lo *g);
bool	check_collosion_left(t_lo *g);
bool	check_collosion_right(t_lo *g);
bool	check_collosion_down(t_lo *g);
void    set_ennemies(t_lo *g);

#endif