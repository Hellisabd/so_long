/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_double_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrosjea <bgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:52:12 by bgrosjea          #+#    #+#             */
/*   Updated: 2024/02/10 11:51:21 by bgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free (tab[i]);
			i++;
		}
		free (tab);
	}
}

void	ft_free_tab_int(int **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			//  ft_printf("%d\n", tab[i][100]);
			free (tab[i]);
			i++;
		}
		free (tab);
	}
}
