/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_2digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:23:03 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 19:56:29 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_write_2digits(char *str, t_dict *dico, int size)
{
	int		i;
	int		number;
	char	*ten;
	char	*unite;

	i = 0;
	while (ft_strcmp(str, dico[i].number) != 0 && i < NB_ROWS)
		i++;
	if (i != NB_ROWS)
		ft_putstr(dico[i].value);
	else
	{
		number = ft_atoi(str);
		ten = ft_itoa((number - (number % 10)), size, 0, 0);
		unite = ft_itoa((number % 10), size, 0, 0);
		ft_write_2digits(ten, dico, size);
		ft_putchar(' ');
		ft_write_digit(unite, dico);
	}
}
