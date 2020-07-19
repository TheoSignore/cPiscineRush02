/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:19:41 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/19 18:00:48 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <stdlib.h>
# include <unistd.h>

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

#endif
