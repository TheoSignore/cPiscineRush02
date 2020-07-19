/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_speakable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:31:04 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 21:33:52 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_is_speakable(char *nbr, char **dict)
{
	int i;
	int j;
	int nbr_len;
	int limit;
	int boolean;

	nbr_len = ft_strlen(nbr);
	limit = 1;
	while (limit <= nbr_len)
	{
		i = -1;
		boolean = 0;
		while (dict[++i])
		{
			if (ft_strlen_a(dict[i]) == limit)
			{
				if (ft_is_order(dict[i]))
					boolean = 1;
			}
		}
		if (boolean == 0)
			return (0);
		limit = limit + 3;
	}
	return (1);
}

int		ft_is_order(char *str)
{
	int i;

	if (str[0] == '1')
	{
		i = 1;
		while (str[i] != ':')
		{
			if (str[i] != '0')
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int		ft_zero_begin(char *nbr)
{
	if(nbr[0] == '0' && ft_strlen(nbr) != 1)
		return (1);
	return (0);
}
