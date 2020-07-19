/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errordict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:53:58 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 23:01:44 by tsignore         ###   ########.fr       */
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

int		check_tab(char **tab)
{
	int i;
	int j;
	int check;

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
		check = 1;
		while (tab[i][++j])
		{
			if (tab[i][j] != ' ' && tab[i][j] > 31 && tab[i][j] < 127)
				check = 0;
		}
		if (check == 1)
			return (1);
	}
	return (0);
}
