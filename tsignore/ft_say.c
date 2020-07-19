/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:02:27 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 17:44:28 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_say_three(char *nbr, char **dict)
{
	int		nbr_len;
	char	*nb;
	int		i;

	nbr_len = ft_strlen(nbr);
	if (!(nb = (char *)malloc(sizeof(char) * 4)))
		return ;
	i = 0;
	while (i < 3)
	{
		nb[i] = i >= nbr_len ? '\0' : nbr[i];
		i++;
	}
	nb[i] = '\0';
	if (ft_strlen(nb) == 3)
		ft_hundred(nb, dict);
	else if (nbr_len == 2)
		ft_decade(nb, dict);
	else
		ft_unit(nb, dict);
	free(nb);
}

void	ft_say(char *nbr, char **dict)
{
	int		nbr_len;
	int		max_len;
	char	*ptr;

	if (nbr[0] == '\0')
		return ;
	nbr_len = ft_strlen(nbr);
	if (nbr_len % 3 != 0)
	{
		ptr = ft_get_three(nbr);
		ft_say_three(ptr, dict);
		free(ptr);
	}
	else
		ft_say_three(nbr, dict);
	if (nbr_len <= 3)
		return ;
	ft_say_order(nbr, dict);
	max_len = nbr_len % 3 != 0 ? nbr_len % 3 : 3;
	ft_say(&nbr[max_len], dict);
}
