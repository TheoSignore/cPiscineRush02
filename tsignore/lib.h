/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:19:41 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 20:09:53 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <libgen.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen_a(char *str);
int		ft_strlen_b(char *str);
char	*ft_get_a(char *str);
char	*ft_get_b(char *str);
char	*ft_get_three(char *nbr);
void	ft_hundred(char *nbr, char **dict);
void	ft_decade(char *nbr, char **dict);
void	ft_get_decade(char *nbr, char **dict);
void	ft_unit(char *nbr, char **dict);
void	ft_say_order(char *nbr, char **dict);
void	ft_say(char *nbr, char **dict);
void	ft_say_three(char *nbr, char **dict);
int		split_tab(char *str, char **av);
char	*fill_splited(char *str, int i, int alloc);
int		nbr_mots(char *str, char *charset, int len);
int		is_inchar(char cmp, char *charset);
char	**ft_split(char *str, char *charset);
char	**ft_splited(char **splited, char *str, char *charset, int len);
int		ft_error(int ac, char **av);
int		ft_putstint(char *str);
int		check_valid_dico(char *tab);
int		is_nu(char c);

#endif
