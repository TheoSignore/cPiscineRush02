/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:26:37 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 21:19:33 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int s1_len;
	int s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (i <= s1_len && i <= s2_len)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
