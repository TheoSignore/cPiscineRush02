/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 20:04:47 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 21:59:47 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_putstint(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &(str[i]), 1);
	return (0);
}

int			is_inchar(char cmp, char *charset)
{
	int		i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == cmp)
			return (1);
	}
	return (0);
}

int			nbr_mots(char *str, char *charset, int len)
{
	int		i;
	int		sep;

	sep = 0;
	i = 0;
	while ((str[i]) && is_inchar(str[i], charset) == 1)
		i++;
	while (str[i])
	{
		if (is_inchar(str[i], charset) == 1)
		{
			sep++;
			while (is_inchar(str[i + 1], charset) == 1 && str[i + 1])
				i++;
		}
		i++;
	}
	if (is_inchar(str[len - 1], charset) == 1)
		sep--;
	sep++;
	if (sep == 0)
		return (0);
	return (sep);
}

char		*fill_splited(char *str, int i, int alloc)
{
	int		x;
	int		w;
	char	*splited;

	w = i;
	x = 0;
	i--;
	if (!(splited = malloc(sizeof(char) * (alloc + 1))))
		return (0);
	while (x < alloc && str[i - alloc + x + 1])
	{
		splited[x] = str[i - alloc + x + 1];
		x++;
	}
	splited[x] = '\0';
	return (splited);
}

char		**ft_split(char *str, char *charset)
{
	char	**splited;
	int		len;

	len = 0;
	while (str[len])
		len++;
	if (!(splited = malloc(sizeof(char *) * (nbr_mots(str, charset, len) + 1))))
		return (0);
	splited = ft_splited(splited, str, charset, len);
	splited[nbr_mots(str, charset, len)] = 0;
	return (splited);
}
