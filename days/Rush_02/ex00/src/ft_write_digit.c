/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:38:34 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 13:38:36 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_write_digit(char *str, t_dict *dico)
{
	int	i;

	i = 0;
	while (ft_strcmp(str, dico[i].number) != 0)
		i++;
	ft_putstr(dico[i].value);
}
