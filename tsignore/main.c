/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:42:39 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 20:35:09 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	char **tab;
	char *nbr;

	(void)ac;
	tab = (char **)malloc(sizeof(char *) * 33);
	tab[0] = "0:zero ";
	tab[1] = "1:one ";
	tab[2] = "2:two ";
	tab[3] = "3:three ";
	tab[4] = "4:four ";
	tab[5] = "5:five ";
	tab[6] = "6:six ";
	tab[7] = "7:seven ";
	tab[8] = "8:eight ";
	tab[9] = "9:nine ";
	tab[10] = "10:ten ";
	tab[11] = "11:eleven ";
	tab[12] = "12:twelve ";
	tab[13] = "13:thirteen ";
	tab[14] = "14:fourteen ";
	tab[15] = "15:fifteen ";
	tab[16] = "16:sixteen ";
	tab[17] = "17:seventeen ";
	tab[18] = "18:eighteen ";
	tab[19] = "19:nineteen ";
	tab[20] = "44:MERDE ";
	tab[21] = "20:twenty ";
	tab[22] = "30:thirty ";
	tab[23] = "40:fourty ";
	tab[24] = "50:fifty ";
	tab[25] = "60:sixty ";
	tab[26] = "70:seventy ";
	tab[27] = "80:eighty ";
	tab[28] = "90:ninety ";
	tab[29] = "100:hundred ";
	tab[30] = "1000000:million ";
	tab[31] = "1000000000:billion ";
	tab[32] = NULL;
	nbr = av[1];
	ft_say(nbr, tab);
	ft_putchar(8);
	return (0);
}
