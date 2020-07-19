/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:45:29 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 22:00:32 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int					is_nu(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void				ft_putstr(char *str)
{
	int				i;

	i = -1;
	while (str[++i])
		write(1, &(str[i]), 1);
}

int					ft_strlendp(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ':')
		i++;
	return (i);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(s1) != ft_strlendp(s2))
		return (-1);
	while (((s1[i]) || (s2[i])) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
