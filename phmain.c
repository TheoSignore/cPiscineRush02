/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:16:49 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/18 19:57:32 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*fill_tab(char *tab, int len)
{
	char	buff;
	int		i;
	int		file;

	i = 0;
	file = open("numbers.dict.txt", O_RDONLY);
	while ((read(file, &buff, 1)))
	{
		tab[i] = buff;
		if (tab[i-1] == '\n' && tab[i] == ' ')
			i--;
		else if (tab[i-1] == ' ' && tab[i] == ' ')
			i--;
		if (tab[i-1] == '\n' && tab[i] == '\n')
			i--;
		i++;
	}
	close(file);
	ft_putstr(tab);
	return (tab);
}

int			ft_open_dico(char *str, char **av)
{
	int		file;
	char	buff;
	int		dir;
	int		i;
	char	*tab;


	i = 0;
	file = open("numbers.dict.txt", O_RDONLY);
	if (file == -1)
		return (ft_putstint("Error\n"));
	while ((read(file, &buff, 1)))
		i++;
	if (!(tab = malloc(sizeof(char) * (i + 1))))
		return (-1);
	close(file);
	tab = fill_tab(tab, i);
	if (check_valid_dico(tab) == 1)
		return (1);
	return (split_tab(str, av));
}

int			main(int ac, char **av)
{	
	if (ft_error(ac, av) == 0)
		return (1);
	if (ac == 2)
	{
		if (ft_open_dico(av[1], av) == 1)
			return (ft_putstint("Error\n"));
	}
	/*if (ac == 3)
	{
		if (ft_open_dico(av[2], av) == 1)
			return (ft_putstdint("Error\n"));
	}*/
	return (0);
}
