/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:16:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/07 11:42:03 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"

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
}	t_lo;

typedef struct s_pars
{
	char	*line;
	size_t	s_line;
	size_t	height;
	size_t	length;
}	t_pars;

int		check_infos(t_lo *game);
void	check_valid_exit(t_lo *g);
void	spread_x(t_lo *g);
void	spread_y(t_lo *g);
bool	check_c_left(t_lo *g, char c);
bool	check_c_left2(t_lo *g, char c);

#endif