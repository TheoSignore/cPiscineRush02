/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:58:37 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 22:14:38 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		**ft_splited(char **splited, char *str, char *charset, int len)
{
	int		i;
	int		alloc;
	int		sp;

	sp = -1;
	alloc = 0;
	i = 0;
	while (str[i])
	{
		alloc = 0;
		if (is_inchar(str[i], charset) == 1 || i == 0)
		{
			while (is_inchar(str[i], charset) == 1 && str[i])
				i++;
			while (is_inchar(str[i], charset) == 0 && str[i] && alloc++ > -2)
				i++;
			splited[++sp] = fill_splited(str, i, alloc);
			i--;
		}
		i++;
	}
	if ((is_inchar(str[len - 1], charset) == 0) &&
	(sp + 2 == nbr_mots(str, charset, len)))
		splited[++sp] = fill_splited(str, i, alloc);
	return (splited);
}

char		*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		e;

	e = 0;
	i = 0;
	while (src[i])
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (src[e])
	{
		dest[e] = src[e];
		e++;
	}
	dest[e] = '\0';
	return (dest);
}

char		**fill_key(char **key)
{
	key[20] = ft_strdup("20");
	key[21] = ft_strdup("30");
	key[22] = ft_strdup("40");
	key[23] = ft_strdup("50");
	key[24] = ft_strdup("60");
	key[25] = ft_strdup("70");
	key[26] = ft_strdup("80");
	key[27] = ft_strdup("90");
	key[28] = ft_strdup("100");
	key[29] = ft_strdup("1000");
	key[30] = ft_strdup("1000000");
	key[31] = ft_strdup("1000000000");
	key[32] = ft_strdup("1000000000000");
	key[33] = ft_strdup("1000000000000000");
	key[34] = ft_strdup("1000000000000000000");
	key[35] = ft_strdup("1000000000000000000000");
	key[36] = ft_strdup("1000000000000000000000000");
	key[37] = ft_strdup("1000000000000000000000000000");
	key[38] = ft_strdup("1000000000000000000000000000000");
	key[39] = ft_strdup("1000000000000000000000000000000000");
	key[40] = ft_strdup("1000000000000000000000000000000000000");
	key[41] = 0;
	return (key);
}

char		**init_key(char **key)
{
	key[0] = ft_strdup("0");
	key[1] = ft_strdup("1");
	key[2] = ft_strdup("2");
	key[3] = ft_strdup("3");
	key[4] = ft_strdup("4");
	key[5] = ft_strdup("5");
	key[6] = ft_strdup("6");
	key[7] = ft_strdup("7");
	key[8] = ft_strdup("8");
	key[9] = ft_strdup("9");
	key[10] = ft_strdup("10");
	key[11] = ft_strdup("11");
	key[12] = ft_strdup("12");
	key[13] = ft_strdup("13");
	key[14] = ft_strdup("14");
	key[15] = ft_strdup("15");
	key[16] = ft_strdup("16");
	key[17] = ft_strdup("17");
	key[18] = ft_strdup("18");
	key[19] = ft_strdup("19");
	return (fill_key(key));
}
