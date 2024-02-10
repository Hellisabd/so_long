/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:24:15 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/10 10:18:48 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool     check_collision_down(t_lo *g)
{
    while (g->data_p.player_pos_x < g->data_p.player_size_x)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y + g->data_p.player_size_y + 10]\
            [ g->data_p.player_pos_x] == 1)
            return (false);
        g->data_p.player_pos_x++;
    }
    return (true);
}

bool     check_collision_up(t_lo *g)
{
    while (g->data_p.player_pos_x < g->data_p.player_size_x)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y - 10]\
            [ g->data_p.player_pos_x] == 1)
            return (false);
        g->data_p.player_pos_x++;
    }
    return (true);
}

bool     check_collision_right(t_lo *g)
{
    while (g->data_p.player_pos_y < g->data_p.player_size_y)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y]\
            [ g->data_p.player_pos_x + g->data_p.player_size_x + 10] == 1)
            return (false);
        g->data_p.player_pos_y++;
    }
    return (true);
}

bool     check_collision_left(t_lo *g)
{
    while (g->data_p.player_pos_y < g->data_p.player_size_y)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y]\
            [ g->data_p.player_pos_x - 10] == 1)
            return (false);
        g->data_p.player_pos_y++;
    }
    return (true);
}