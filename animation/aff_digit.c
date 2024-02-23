/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:11:50 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/23 11:57:37 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	delete_digit1(t_lo *g)
{
	g->score.ts0->instances->enabled = false;
	g->score.ts1->instances->enabled = false;
	g->score.ts2->instances->enabled = false;
	g->score.ts3->instances->enabled = false;
	g->score.ts4->instances->enabled = false;
	g->score.ts5->instances->enabled = false;
	g->score.ts6->instances->enabled = false;
	g->score.ts7->instances->enabled = false;
	g->score.ts8->instances->enabled = false;
	g->score.ts9->instances->enabled = false;
}

void	delete_digit(t_lo *g)
{
	g->score.ss0->instances->enabled = false;
	g->score.ss1->instances->enabled = false;
	g->score.ss2->instances->enabled = false;
	g->score.ss3->instances->enabled = false;
	g->score.ss4->instances->enabled = false;
	g->score.ss5->instances->enabled = false;
	g->score.ss6->instances->enabled = false;
	g->score.ss7->instances->enabled = false;
	g->score.ss8->instances->enabled = false;
	g->score.ss9->instances->enabled = false;
	g->score.fs0->instances->enabled = false;
	g->score.fs1->instances->enabled = false;
	g->score.fs2->instances->enabled = false;
	g->score.fs3->instances->enabled = false;
	g->score.fs4->instances->enabled = false;
	g->score.fs5->instances->enabled = false;
	g->score.fs6->instances->enabled = false;
	g->score.fs7->instances->enabled = false;
	g->score.fs8->instances->enabled = false;
	g->score.fs9->instances->enabled = false;
	delete_digit1(g);
}

void	aff_first(t_lo *g, char c)
{
	if (c == '0')
		g->score.fs0->instances->enabled = true;
	if (c == '1')
		g->score.fs1->instances->enabled = true;
	if (c == '2')
		g->score.fs2->instances->enabled = true;
	if (c == '3')
		g->score.fs3->instances->enabled = true;
	if (c == '4')
		g->score.fs4->instances->enabled = true;
	if (c == '5')
		g->score.fs5->instances->enabled = true;
	if (c == '6')
		g->score.fs6->instances->enabled = true;
	if (c == '7')
		g->score.fs7->instances->enabled = true;
	if (c == '8')
		g->score.fs8->instances->enabled = true;
	if (c == '9')
		g->score.fs9->instances->enabled = true;
}

void	aff_second(t_lo *g, char c)
{
	if (c == '0')
		g->score.ss0->instances->enabled = true;
	if (c == '1')
		g->score.ss1->instances->enabled = true;
	if (c == '2')
		g->score.ss2->instances->enabled = true;
	if (c == '3')
		g->score.ss3->instances->enabled = true;
	if (c == '4')
		g->score.ss4->instances->enabled = true;
	if (c == '5')
		g->score.ss5->instances->enabled = true;
	if (c == '6')
		g->score.ss6->instances->enabled = true;
	if (c == '7')
		g->score.ss7->instances->enabled = true;
	if (c == '8')
		g->score.ss8->instances->enabled = true;
	if (c == '9')
		g->score.ss9->instances->enabled = true;
}

void	aff_third(t_lo *g, char c)
{
	if (c == '0')
		g->score.ts0->instances->enabled = true;
	if (c == '1')
		g->score.ts1->instances->enabled = true;
	if (c == '2')
		g->score.ts2->instances->enabled = true;
	if (c == '3')
		g->score.ts3->instances->enabled = true;
	if (c == '4')
		g->score.ts4->instances->enabled = true;
	if (c == '5')
		g->score.ts5->instances->enabled = true;
	if (c == '6')
		g->score.ts6->instances->enabled = true;
	if (c == '7')
		g->score.ts7->instances->enabled = true;
	if (c == '8')
		g->score.ts8->instances->enabled = true;
	if (c == '9')
		g->score.ts9->instances->enabled = true;
}
