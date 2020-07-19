/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:31:56 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 21:46:17 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen_a(char *str)
{
	int size;

	size = 0;
	while (str[size] != ':')
		size++;
	return (size);
}

int		ft_strlen_b(char *str)
{
	int size;
	int i;

	i = ft_strlen_a(str) + 1;
	size = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_get_a(char *str)
{
	int		size;
	int		i;
	char	*res;

	size = ft_strlen_a(str);
	if (!(res = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_get_b(char *str)
{
	int i;

	i = ft_strlen_a(str) + 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (&str[i]);
}

char	*ft_get_three(char *nbr)
{
	int		size;
	int		i;
	char	*first_three;

	size = (ft_strlen(nbr) % 3) + 1;
	if (!(first_three = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		first_three[i] = nbr[i];
		i++;
	}
	first_three[i] = '\0';
	return (first_three);
}
