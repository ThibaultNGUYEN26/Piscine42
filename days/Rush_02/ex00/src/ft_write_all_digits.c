/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_all_digits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:52:46 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 20:24:35 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include <stdio.h>

void	ft_write_all_digits(char *str, t_dict *dico)
{
	int	size;

	size = ft_strlen(str);
	if (size == 1)
		ft_write_digit(str, dico);
	else if (size == 2)
		ft_write_2digits(str, dico, size);
	else if (size == 3)
		ft_write_3digits(str, dico, size);
}
