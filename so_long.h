/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:16:44 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/05 14:32:44 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"

typedef struct s_lo
{
	int		l_nbr;
	int		player;
	int		exit;
	char	**map;
	size_t		x;
	size_t		y;
}	t_lo;

typedef struct s_pars
{
	char	*line;
	size_t	s_line;
	size_t	height;
	size_t	length;
}	t_pars;

#endif