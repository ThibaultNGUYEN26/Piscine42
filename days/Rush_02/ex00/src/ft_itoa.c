/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:27:34 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 20:05:53 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*ft_itoa(int num, int size, int i, int reste)
{
	char	*str;

	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		if (num == 0)
		{
			str[i] = '0';
			str[i + 1] = '\0';
			return (str);
		}
		while (num != 0)
		{
			reste = num % 10;
			if (reste > 9)
				str[i++] = (reste - 10) + 'A';
			else
				str[i++] = reste + '0';
			num /= 10;
		}
		str[i] = '\0';
		ft_strrev(str, i);
	}
	return (str);
}
