/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errordict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:31:42 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 23:32:54 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_first(char c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

int		ft_check_tab_bis(int j, int i, char **tab)
{
	while (tab[i][++j])
	{
		if (tab[i][j] != ' ' && tab[i][j] > 31 && tab[i][j] < 127)
			return (0);
	}
	return (1);
}

int		check_tab(char **tab)
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j] != ':')
		{
			if (!check_first(tab[i][j]))
				return (1);
		}
		j++;
		if (ft_check_tab_bis(j, i, tab))
			return (1);
	}
	return (0);
}
