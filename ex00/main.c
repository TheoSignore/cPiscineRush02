/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:16:49 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 22:50:38 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int ac, char **av)
{
	if (ft_error(ac, av) == 0)
		return (1);
	if (ac == 2)
	{
		if (ft_open_dico("numbers.dict.txt", av[1]) == 1)
			return (ft_putstint("Error\n"));
	}
	if (ac == 3)
	{
		if (ft_open_dico(av[1], av[2]) == 1)
			return (ft_putstint("Error\n"));
	}
	return (0);
}
