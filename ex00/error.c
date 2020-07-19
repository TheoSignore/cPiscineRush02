/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:44:07 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 22:51:10 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			is_number(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	if(str[0] == '0' && ft_strlen(str) != 1)
		return (1);
	return (0);
}

int			is_not(char *key, char **strs)
{
	int		i;

	i = -1;
	while (strs[++i])
	{
		if (ft_strncmp(key, strs[i], ft_strlen(key)) == 0)
			return (1);
	}
	return (0);
}

int			check_valid_strs(char **strs)
{
	int		i;
	int		x;
	char	**key;

	x = -1;
	i = -1;
	if (!(key = malloc(sizeof(char *) * (42))))
		return (-1);
	key = init_key(key);
	while (key[++i])
	{
		if (is_not(key[i], strs) == 0)
			return (1);
	}
	while (key[++x])
		free(key[x]);
	return (0);
}

int			check_valid_dico(char *tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == '\t' || tab[i] == '\v' ||
		tab[i] == '\f' || tab[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}

int			ft_error(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2 && ac != 3)
		return (ft_putstint("Error\n"));
	if (ac == 2)
	{
		if (is_number(av[1]) == 1)
			return (ft_putstint("Error\n"));
	}
	else if (ac == 3)
	{
		if (is_number(av[2]) == 1)
			return (ft_putstint("Error\n"));
	}
	return (1);
}
