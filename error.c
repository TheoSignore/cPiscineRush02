/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:44:07 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/18 19:57:34 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_putstint(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	return (0);
}

int		is_number(char *str)
{
	int	i;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int		check_valid_dico(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == '\t')
			return (1);
		i++;
	}
	return (0);
}

int		ft_error(int ac, char **av)
{
	int	i;

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
