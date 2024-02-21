/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:39 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/21 16:59:13 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    init_texture(t_lo *g)
{
    g->sprite.back_t = NULL;
    g->sprite.player_t = NULL;
    g->sprite.player_w_t = NULL;
    g->sprite.wall_t = NULL;
    g->sprite.c1_t = NULL;
    g->sprite.c3_t = NULL;
    g->sprite.exit = NULL;
    g->sprite.ennemiesl1_t = NULL;
    g->sprite.ennemiesl2_t = NULL;
    g->sprite.ennemiesr1_t = NULL;
    g->sprite.ennemiesr2_t = NULL;
    g->sprite.success_t = NULL;
    g->death.tab_t[0] = NULL;
    g->death.tab_t[1] = NULL;
    g->death.tab_t[2] = NULL;
    g->death.tab_t[3] = NULL;
    g->death.tab_t[4] = NULL;
    g->death.tab_t[5] = NULL;
    g->death.tab_t[6] = NULL;
    g->death.tab_t[7] = NULL;
    g->death.tab_t[8] = NULL;
    g->death.tab_t[9] = NULL;
    g->death.tab_t[10] = NULL;
    g->death.tab_t[11] = NULL;
    g->death.tab_t[12] = NULL;
    g->death.tab_t[13] = NULL;
    g->death.tab_t[14] = NULL;
    g->death.tab_t[15] = NULL;
    g->death.tab_t[16] = NULL;
    g->death.tab_t[17] = NULL;
    g->death.tab_t[18] = NULL;
    g->death.tab_t[19] = NULL;
    g->death.tab_t[20] = NULL;
    g->death.tab_t[21] = NULL;
    g->death.tab_t[22] = NULL;
    g->death.tab_t[23] = NULL;
    g->death.tab_t[24] = NULL;
    g->death.tab_t[25] = NULL;
    g->death.tab_t[26] = NULL;
    g->death.tab_t[27] = NULL;
    g->death.tab_t[28] = NULL;
    g->death.tab_t[29] = NULL;
    g->sword.tab_t[0] = NULL;
    g->sword.tab_t[1] = NULL;
    g->sword.tab_t[2] = NULL;
    g->sword.tab_t[3] = NULL;
    g->sword.tab_t[4] = NULL;
    g->sword.tab_t[5] = NULL;
    g->death.d_screen_t = NULL;
    g->data_p.tab_t[0] = NULL;
    g->data_p.tab_t[1] = NULL;
    g->data_p.tab_t[2] = NULL;
    g->data_p.tab_t[3] = NULL;
    g->data_p.tab_t[4] = NULL;
    g->data_p.tab_t[5] = NULL;
    g->data_p.tab_w_t[0] = NULL;
    g->data_p.tab_w_t[1] = NULL;
    g->data_p.tab_w_t[2] = NULL;
    g->data_p.tab_w_t[3] = NULL;
    g->data_p.tab_w_t[4] = NULL;
    g->data_p.tab_w_t[5] = NULL;
    g->score.s0_t = NULL;
    g->score.s1_t = NULL;
    g->score.s2_t = NULL;
    g->score.s3_t = NULL;
    g->score.s4_t = NULL;
    g->score.s5_t = NULL;
    g->score.s6_t = NULL;
    g->score.s7_t = NULL;
    g->score.s8_t = NULL;
    g->score.s9_t = NULL;
}
