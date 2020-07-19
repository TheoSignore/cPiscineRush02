/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 13:12:55 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 20:22:34 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		split_tab(char *tab, char **av)
{
	char **strs;
	int		len;

	len = -1;
	strs = ft_split(tab, "\n");
	if (check_valid_strs(strs) == 1)
	{
		free(tab);
		while (strs[++len])
			free(strs[len]);
		return (ft_putstint("Error\n"));
	}
//	int x = -1;
//	while (strs[++x])
//		printf("[%s]\n", strs[x]);
	free(tab);
	while (strs[++len])
		free(strs[len]);
	return (0);
}

char		*fill_tab(char *dico, char *tab, int len)
{
	char	buff;
	int		i;
	int		file;
	char	*new_tab;
	int		x;

	x = 0;
	i = -1;
	file = open(dico, O_RDONLY);
	if (!(new_tab = malloc(sizeof(char) * (len * 2))))
		return (NULL);
	while ((read(file, &buff, 1)))
		tab[++i] = buff;
	tab[i] = '\0';
	i = 0;
	while (tab[i + 1])
	{
		new_tab[x] = tab[i];
		while (tab[i] == ' ' && tab[i + 1] == ' ')
			i++;
		/*if (tab[i - 1] == '\n' && tab[i] == ' ')
			i++;
		else if (tab[i - 1] == ' ' && tab[i] == ' ')
			i++;
		else if (tab[i - 1] == '\n' && tab[i] == '\n')
			i++;
		else if (tab[i - 1] == ':' && tab[i] == ' ')
			i++;
		else if (is_nu(tab[i - 1]) == 1 && tab[i] == ' ')
			i++;
		else if (tab[i - 1] != ' ' && tab[i] == '\n')
		{
			tab[i] = ' ';
			tab[++i] = '\n';
		}*/
		x++;
		i++;
	}
	new_tab[i] = '\0';
	printf("[%s]", new_tab);
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
	if (!(tab = malloc(sizeof(char) * (i * 2))))
		return (-1);
	close(file);
	tab = fill_tab(dico, tab, i);
	if (check_valid_dico(tab) == 1)
	{
		free(tab);
		return (1);
	}
	return (split_tab(tab, av));
	return (0);
}
