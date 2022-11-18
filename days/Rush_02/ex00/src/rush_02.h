/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:26:57 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 20:24:54 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define SIZE 690
# define NB_ROWS 41

typedef struct dict_regex
{
	char	number[40];
	char	value[15];
}	t_dict;

unsigned int	ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*ft_strstr(char *str, char *to_find);
int				ft_strcmp(char *s1, char *s2);
char			ft_strncmp(char *s1, char *s2, unsigned int n);
void			ft_write_digit(char *str, t_dict *dico);
char			*ft_itoa(int num, int size, int i, int reste);
char			*ft_strrev(char *str, int size);
void			ft_write_all_digits(char *str, t_dict *dico);
void			ft_write_2digits(char *str, t_dict *dico, int size);
void			ft_write_3digits(char *str, t_dict *dico, int size);
char			**ft_specials(t_dict *dico);
void			ft_rest(char *str, t_dict *dico, int size, char **spe);
char			*ft_strcpy(char *dest, char *src);

#endif
