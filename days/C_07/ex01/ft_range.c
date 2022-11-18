/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:26:54 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/28 12:02:08 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (i >= max)
		return (0);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
