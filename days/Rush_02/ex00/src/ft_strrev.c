/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:26:36 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 16:26:39 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_strrev(char *str, int size)
{
	int	rev;
	int	temp;
	int	i;

	i = 0;
	rev = size - 1;
	while (i < size / 2)
	{
		temp = *(str + i);
		*(str + i) = *(str + rev);
		*(str + rev) = temp;
		i++;
		rev--;
	}
	return (str);
}
