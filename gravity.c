/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gravity.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:01:22 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/12 15:06:38 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    gravity(t_lo *g)
{
    while (check_collision_down(g))
    {
        g->sprite.player->instances[0].y += 1;
        g->data_p.player_pos_y += 1;
    }
}