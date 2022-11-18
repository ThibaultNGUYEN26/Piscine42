/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specials.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:36:35 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 19:09:28 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	**ft_specials(t_dict *dico)
{
	int		i;
	int		j;
	char	**spe;

	spe = (char **)malloc(sizeof(char *) * 11);
	i = 0;
	while (i < 11)
	{
		spe[i] = (char *)malloc(sizeof(char) * 20);
		i++;
	}
	j = 0;
	i = 29;
	if (spe != NULL)
	{
		while (i < 40)
		{	
			ft_strcpy(spe[j], dico[i].value);
			j++;
			i++;
		}
		ft_strcpy(spe[j - 1], dico[i].value);
	}
	return (spe);
}
