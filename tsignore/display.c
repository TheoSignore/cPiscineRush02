/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:58:23 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 16:05:19 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		split_tab(char *tab, char **av)
{
	char **strs;

	strs = ft_split(tab, "\n");

	int x = -1;
	while (strs[++x])
		printf("[%s]\n", strs[x]);
	return (0);
}

char		*fill_tab(char *dico, char *tab, int len)
{
	char	buff;
	int		i;
	int		file;

	i = 0;
	file = open(dico, O_RDONLY);
	while ((read(file, &buff, 1)))
	{
		tab[i] = buff;
		if (tab[i-1] == '\n' && tab[i] == ' ')
			i--;
		else if (tab[i-1] == ' ' && tab[i] == ' ')
			i--;
		else if (tab[i-1] == '\n' && tab[i] == '\n')
			i--;
		else if (tab[i-1] == ':' && tab[i] == ' ')
			i--;
		else if (is_nu(tab[i-1]) == 1 && tab[i] == ' ')
			i--;
		i++;
	}
	close(file);
	return (tab);
}

int			ft_open_dico(char *dico, char **av)
{
	int		file;
	char	buff;
	int		dir;
	int		i;
	char	*tab;

	i = 0;
	file = open(dico, O_RDONLY);
	if (file == -1)
		return (ft_putstint("Error\n"));
	while ((read(file, &buff, 1)))
		i++;
	if (!(tab = malloc(sizeof(char) * (i + 1))))
		return (-1);
	close(file);
	tab = fill_tab(dico, tab, i);
	if (check_valid_dico(tab) == 1)
		return (1);
	return (split_tab(tab, av));
}
