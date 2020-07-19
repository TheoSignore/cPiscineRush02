/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 20:05:22 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/18 20:06:32 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		**ft_splited(char **splited, char *str, char *charset, int len)
{
	int		i;
	int		alloc;
	int		sp;

	sp = -1;
	alloc = 0;
	i = 0;
	while (str[i])
	{
		alloc = 0;
		if (is_inchar(str[i], charset) == 1 || i == 0)
		{
			while (is_inchar(str[i], charset) == 1 && str[i])
				i++;
			while (is_inchar(str[i], charset) == 0 && str[i] && alloc++ > -2)
				i++;
			splited[++sp] = fill_splited(str, i, alloc);
			i--;
		}
		i++;
	}
	if ((is_inchar(str[len - 1], charset) == 0) &&
	(sp + 2 == nbr_mots(str, charset, len)))
		splited[++sp] = fill_splited(str, i, alloc);
	return (splited);
}
