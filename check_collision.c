/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:24:15 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/12 16:44:12 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool     check_collision_down(t_lo *g)
{
    int tmp;

    tmp = g->data_p.player_size_x + g->data_p.player_pos_x;
    while (g->data_p.player_pos_x < tmp)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y + g->data_p.player_size_y + 1]\
            [ g->data_p.player_pos_x] == '1')
            return (false);
        g->data_p.player_pos_x += 1;
    }
    return (true);
}

bool     check_collision_up(t_lo *g)
{
    int tmp;

    tmp = g->data_p.player_size_x + g->data_p.player_pos_x;
    while (g->data_p.player_pos_x < tmp)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y - 50]\
            [ g->data_p.player_pos_x] == '1')
            return (false);
        g->data_p.player_pos_x += 1;
    }
    return (true);
}

bool     check_collision_right(t_lo *g)
{
    int tmp;

    tmp = g->data_p.player_size_y + g->data_p.player_pos_y;
    while (g->data_p.player_pos_y < tmp)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y]\
            [ g->data_p.player_pos_x + g->data_p.player_size_x + 10] == '1')
            return (false);
        g->data_p.player_pos_y += 1;
    }
    return (true);
}

bool     check_collision_left(t_lo *g)
{
    int tmp;

    tmp = g->data_p.player_size_y + g->data_p.player_pos_y;
    while (g->data_p.player_pos_y < tmp)
    {
        if (g->h_m.hidden_map\
            [g->data_p.player_pos_y]\
            [ g->data_p.player_pos_x - 10] == '1')
            return (false);
        g->data_p.player_pos_y += 1;
    }
    return (true);
}