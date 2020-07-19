/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:34:48 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/18 20:35:14 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <libgen.h>

int		split_tab(char *str, char **av);
char	*fill_splited(char *str, int i, int alloc);
int		nbr_mots(char *str, char *charset, int len);
int		is_inchar(char cmp, char *charset);
char	**ft_split(char *str, char *charset);
char	**ft_splited(char **splited, char *str, char *charset, int len);
int		ft_error(int ac, char **av);
int		ft_putstint(char *str);
void	ft_putstr(char *str);
int		check_valid_dico(char *tab);
int		is_nu(char c);

#endif
