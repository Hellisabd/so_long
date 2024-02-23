/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:16:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 15:43:40 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"
# include "math.h"

# define WIDTH 2000
# define HEIGHT 2000

typedef struct s_sprite
{
	mlx_texture_t	*back_t;
	mlx_texture_t	*player_t;
	mlx_texture_t	*player_w_t;
	mlx_texture_t	*wall_t;
	mlx_texture_t	*c1_t;
	mlx_texture_t	*c3_t;
	mlx_texture_t	*exit_t;
	mlx_texture_t	*ennemiesr1_t;
	mlx_texture_t	*ennemiesl1_t;
	mlx_texture_t	*ennemiesr2_t;
	mlx_texture_t	*ennemiesl2_t;
	mlx_texture_t	*success_t;
	mlx_image_t		*background;
	mlx_image_t		*player;
	mlx_image_t		*player_w;
	mlx_image_t		*wall;
	mlx_image_t		*exit;
	mlx_image_t		*c1;
	mlx_image_t		*c3;
	mlx_image_t		*ennemiesr1;
	mlx_image_t		*ennemiesl1;
	mlx_image_t		*ennemiesl2;
	mlx_image_t		*ennemiesr2;
	mlx_image_t		*success;
}	t_sprite;

typedef struct s_hidden
{
	char	**hidden_map;
	int		start_y;
	int		end_y;
	int		start_x;
	int		end_x;		
}	t_hidden;

typedef struct s_del
{
	float	f_x;
	float	f_y;
	int		x;
	int		y;
}	t_del;

typedef struct s_death
{
	mlx_image_t		*tab[30];
	mlx_texture_t	*tab_t[30];
	int				x;
	int				y;
	int				death;
	int				frame;
	mlx_image_t		*d_screen;
	mlx_texture_t	*d_screen_t;
}	t_death;

typedef struct s_sword
{
	mlx_image_t		*tab[6];
	mlx_texture_t	*tab_t[6];
	int				frame1;
	int				frame2;
	int				x;
	int				y;
}	t_sword;

typedef struct s_data_p
{
	int32_t			player_pos_y;
	int32_t			player_pos_x;
	int32_t			player_size_x;
	int32_t			player_size_y;
	int				p_speed;
	int				weapon;
	int				sword;
	int				holy;
	mlx_image_t		*tab[6];
	mlx_texture_t	*tab_t[6];
	mlx_image_t		*tab_w[6];
	mlx_texture_t	*tab_w_t[6];
	int				frame;
}	t_data_p;

typedef struct s_score
{
	mlx_texture_t	*s0_t;
	mlx_texture_t	*s1_t;
	mlx_texture_t	*s2_t;
	mlx_texture_t	*s3_t;
	mlx_texture_t	*s4_t;
	mlx_texture_t	*s5_t;
	mlx_texture_t	*s6_t;
	mlx_texture_t	*s7_t;
	mlx_texture_t	*s8_t;
	mlx_texture_t	*s9_t;
	mlx_image_t		*fs0;
	mlx_image_t		*fs1;
	mlx_image_t		*fs2;
	mlx_image_t		*fs3;
	mlx_image_t		*fs4;
	mlx_image_t		*fs5;
	mlx_image_t		*fs6;
	mlx_image_t		*fs7;
	mlx_image_t		*fs8;
	mlx_image_t		*fs9;
	mlx_image_t		*ss0;
	mlx_image_t		*ss1;
	mlx_image_t		*ss2;
	mlx_image_t		*ss3;
	mlx_image_t		*ss4;
	mlx_image_t		*ss5;
	mlx_image_t		*ss6;
	mlx_image_t		*ss7;
	mlx_image_t		*ss8;
	mlx_image_t		*ss9;
	mlx_image_t		*ts0;
	mlx_image_t		*ts1;
	mlx_image_t		*ts2;
	mlx_image_t		*ts3;
	mlx_image_t		*ts4;
	mlx_image_t		*ts5;
	mlx_image_t		*ts6;
	mlx_image_t		*ts7;
	mlx_image_t		*ts8;
	mlx_image_t		*ts9;
	int				count_move;
}	t_score;

typedef struct s_lo
{
	int			player;
	int			exit;
	int			coll;
	int			nb_coll;
	char		**map;
	size_t		x;
	size_t		y;
	int			delete_i[3];
	float		size_block_x;
	float		size_block_y;
	int			p_x;
	int			p_y;
	int			e_x;
	int			e_y;
	int			close;
	mlx_t		*mlx;
	t_sprite	sprite;
	int			frame;
	int			height;
	int			width;
	t_data_p	data_p;
	t_score		score;
	t_sword		sword;
	mlx_image_t	*str_screen;
	t_del		del;
	int			count_coll;
	double		time;
	int			i;
	int			success;
	int			en1_x;
	int			en1_y;
	int			en2_x;
	int			en2_y;
	int			dir1;
	int			dir2;
	int			ennemie1_alive;
	int			ennemie2_alive;
	t_death		death;
}	t_lo;

typedef struct s_pars
{
	char	*line;
	size_t	s_line;
	size_t	height;
	size_t	length;
}	t_pars;

int		check_infos(t_lo *game);
int		check_infos2(t_lo *g);
void	check_collectible2(t_lo *g, int x, int y);
void	check_collectible1(t_lo *g, int x, int y);
bool	check_c_left(t_lo *g, char c);
bool	check_c_left2(t_lo *g, char c);
void	check_valid_exit(t_lo *g);
void	find_exit2(t_lo *g);
void	spread_x(t_lo *g);
void	spread_y(t_lo *g);
void	open_window(t_lo *g);
void	ft_count_line(char *file, t_pars *pars);
void	check_walls(t_pars *pars, t_lo *game);
void	map_cpy(t_pars *pars, char *file, t_lo *game);
void	parsing_map(char *file, t_pars *pars, t_lo *game);
void	d_a(void *g1);
void	ft_hook(void *param);
void	d_a4(t_lo *g);
void	d_a10(t_lo *g);
void	init_death(t_lo *g);
void	init_death5(t_lo *g);
void	init_death10(t_lo *g);
void	init_texture(t_lo *g);

//GRAPHISMS
void	set_player_w1(t_lo *g);
void	set_background(t_lo *g);
void	set_player(t_lo *g);
void	set_walls(t_lo *g);
void	set_coll(t_lo *g);
void	set_exit(t_lo *g);
void	aff_exit(t_lo *g);
void	set_score1(t_lo *g);
void	score_img_third(t_lo *g);
void	score_img_second1(t_lo *g);
void	aff_score(t_lo *g);
void	delete_digit(t_lo *g);
void	aff_first(t_lo *g, char c);
void	aff_second(t_lo *g, char c);
void	aff_third(t_lo *g, char c);
void	swords_img1(t_lo *g);
void	set_success(t_lo *g);
void	init_death(t_lo *g);
void	aff_player(t_lo *g, int x, int y);
void	aff_player_w(t_lo *g, int x, int y);
void	player_anim(t_lo *g);
void	player_anim_w(t_lo *g);
void	set_player_w(t_lo *g);
void	move_player(t_lo *g, int dir);
void	d_a5(t_lo *g);

//Secrets

int		integr_coll(t_lo *g);
void	delete_death(t_lo *g, int i);

//COLLISIONS

void	check_collectible(t_lo *g);
void	delete_c(t_lo *g);
bool	check_collosion_up(t_lo *g);
bool	check_collosion_left(t_lo *g);
bool	check_collosion_right(t_lo *g);
bool	check_collosion_down(t_lo *g);
void	set_ennemies(t_lo *g);
void	set_ennemies2(t_lo *g);
int		pat_ennemies2(t_lo *g, int dir);
int		pat_ennemies1(t_lo *g, int dir);

//ANIMATION

void	refresh(t_lo *g);
void	player_death(t_lo *g);

#endif