/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:34:48 by phbarrad          #+#    #+#             */
/*   Updated: 2020/07/19 22:10:39 by phbarrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <libgen.h>

int		split_tab(char *str);
char	*fill_splited(char *str, int i, int alloc);
int		nbr_mots(char *str, char *charset, int len);
int		is_inchar(char cmp, char *charset);
char	**ft_split(char *str, char *charset);
char	**ft_splited(char **splited, char *str, char *charset, int len);
int		ft_error(int ac, char **av);
int		ft_putstint(char *str);
void	ft_putstr(char *str);
int		check_valid_dico(char *tab);
int		check_valid_strs(char **strs);
int		is_nu(char c);
int		ft_open_dico(char *dico);
char	**init_key(char **key);
int		ft_strlen(char *str);
int		ft_strlendp(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen_a(char *str);
int		ft_strlen_b(char *str);
char	*ft_get_a(char *str);
char	*ft_get_b(char *str);
char	*ft_get_three(char *nbr);
int		ft_is_speakable(char *nbr, char **dict);
int		ft_is_order(char *str);
int		ft_zero_begin(char *nbr);
void	ft_hundred(char *nbr, char **dict);
void	ft_decade(char *nbr, char **dict);
void	ft_get_decade(char *nbr, char **dict);
void	ft_unit(char *nbr, char **dict);
void	ft_say_order(char *nbr, char **dict);
void	ft_say_three(char *nbr, char **dict);
void	ft_say(char *nbr, char **dict);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);

#endif
