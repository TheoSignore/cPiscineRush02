/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 13:12:55 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 23:29:15 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			split_tab(char *tab, char *nbr)
{
	char	**strs;
	int		len;

	len = -1;
	strs = ft_split(tab, "\n");
	if (check_valid_strs(strs) == 1 || check_tab(strs) == 1)
	{
		free(tab);
		while (strs[++len])
			free(strs[len]);
		return (ft_putstint("Dict Error\n"));
	}
	if (ft_is_speakable(nbr, strs) == 0)
		return (ft_putstint("Dict Error\n"));
	ft_say(nbr, strs);
	ft_putchar(8);
	ft_putchar('\n');
	free(tab);
	while (strs[++len])
		free(strs[len]);
	return (0);
}

char		*fill_new(char *new_tab, char *tab, int x)
{
	int		i;

	i = -1;
	while (tab[i + 1] && ++i > -2 && ++x > -2)
	{
		new_tab[x] = tab[i];
		if (tab[i] == ' ' && tab[i + 1] == ' ')
			x--;
		else if (tab[i] == '\n' && tab[i + 1] == '\n')
			x--;
		else if (tab[i] == ' ' && tab[i + 1] == ':')
			x--;
		else if (i > 0 && tab[i] == '\n' && tab[i + 1] == ' ')
			x--;
		else if (i > 0 && tab[i - 1] != ' ' && tab[i] == '\n')
		{
			new_tab[x] = ' ';
			new_tab[++x] = '\n';
		}
	}
	new_tab[x] = tab[i];
	new_tab[++x] = ' ';
	new_tab[++x] = '\0';
	return (new_tab);
}

char		*fill_tab(char *dico, char *tab, int len)
{
	char	buff;
	int		i;
	int		file;
	char	*new_tab;

	i = -1;
	file = open(dico, O_RDONLY);
	if (!(new_tab = malloc(sizeof(char) * (len * 2))))
		return (NULL);
	while ((read(file, &buff, 1)))
		tab[++i] = buff;
	tab[i] = '\0';
	new_tab = fill_new(new_tab, tab, -1);
	close(file);
	return (new_tab);
}

int			ft_open_dico(char *dico, char *nbr)
{
	int		file;
	char	buff;
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
	return (split_tab(tab, nbr));
	return (0);
}
