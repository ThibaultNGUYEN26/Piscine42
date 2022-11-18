/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_3digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:45:47 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 19:34:54 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_write_3digits(char *str, t_dict *dico, int size)
{
	int		number;
	int		i;
	char	*hundred;
	char	*ten;

	i = 0;
	while (ft_strcmp(str, dico[i].number) != 0 && i < NB_ROWS)
		i++;
	if (i != NB_ROWS)
		ft_putstr(dico[i].value);
	else
	{
		number = ft_atoi(str);
		hundred = ft_itoa((number / 100), size, 0, 0);
		ft_write_digit(hundred, dico);
		ft_putstr(" hundred ");
		ten = ft_itoa((number % 100), size, 0, 0);
		ft_write_2digits(ten, dico, size);
	}
}
