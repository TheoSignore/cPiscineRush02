/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_say_parts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:37:34 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 20:34:40 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_hundred(char *nbr, char **dict)
{
	int		i;
	char	*hndrd;

	if (nbr[0] != '0')
	{
		if (!(hndrd = (char *)malloc(sizeof(char) * 2)))
			return ;
		hndrd[0] = nbr[0];
		hndrd[1] = '\0';
		ft_say_three(hndrd, dict);
		free(hndrd);
		i = -1;
		while (dict[++i])
		{
			hndrd = ft_get_a(dict[i]);
			if (ft_strcmp(hndrd, "100") == 0)
				break ;
			else
				free(hndrd);
		}
		free(hndrd);
		ft_putstr(ft_get_b(dict[i]));
	}
	ft_say_three(&nbr[1], dict);
}

void	ft_decade(char *nbr, char **dict)
{
	int		i;
	char	*a;

	i = -1;
	while (dict[++i] && (nbr[1] == '0' || nbr[0] < '2'))
	{
		a = ft_get_a(dict[i]);
		if (ft_strcmp(a, nbr) == 0)
		{
			free(a);
			ft_putstr(ft_get_b(dict[i]));
			return ;
		}
		else
			free(a);
	}
	if (nbr[0] == '0')
	{
		if (nbr[1] == '0')
			return ;
		ft_say_three(&nbr[1], dict);
		return ;
	}
	ft_get_decade(nbr, dict);
	ft_say_three(&nbr[1], dict);
}

void	ft_get_decade(char *nbr, char **dict)
{
	char *dcd;

	if (!(dcd = (char *)malloc(sizeof(char) * 3)))
		return ;
	dcd[0] = nbr[0];
	dcd[1] = '0';
	dcd[2] = '\0';
	ft_decade(dcd, dict);
	free(dcd);
}

void	ft_unit(char *nbr, char **dict)
{
	int		i;
	char	*a;

	i = -1;
	while (dict[++i])
	{
		a = ft_get_a(dict[i]);
		if ((ft_strncmp(a, nbr, 1) == 0
					&& ft_strlen(a) == 1))
		{
			free(a);
			ft_putstr(ft_get_b(dict[i]));
			return ;
		}
		else
			free(a);
	}
}

void	ft_say_order(char *nbr, char **dict)
{
	int i;
	int max_len;
	int ndx;
	int nbr_len;

	nbr_len = ft_strlen(nbr);
	i = -1;
	max_len = 0;
	while (dict[++i])
	{
		if (ft_strlen_a(dict[i]) <= nbr_len &&
				max_len < ft_strlen_a(dict[i]))
		{
			max_len = ft_strlen_a(dict[i]);
			ndx = i;
		}
	}
	if (nbr[0] != '0')
		ft_putstr(ft_get_b(dict[ndx]));
}
