/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:36:08 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/31 20:15:41 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_rest(char *str, t_dict *dico, int size, char **spe)
{
	int		count;
	int		nb_paquets;
	int		i;
	int		j;
	char	*temp;

	count = size % 3;
	i = 0;
	j = 0;
	nb_paquets = (size / 3) - 1;
	temp = malloc(sizeof(char) * 20);
	if (temp != NULL)
	{
		while (i < size)
		{
			while (j < count)
				temp[j++] = str[i++];
			ft_write_all_digits(temp, dico, spe);
			ft_putchar(' ');
			ft_putstr(spe[nb_paquets]);
			nb_paquets--;
			i++;
		}
	}
}

/*
100000
size = 7
size / 3 = nb_paquets
nb % 3 == 1 (unite)

{thousand, million, billion}
0 			1			2

compt_spe = nb_paquets - 1;
compt_spe--;

unite + compt_spe + 

26 005 001

1 000 000
if (size >= 4 && size <= 6)
		{
			if (ft_atoi(str) % 3 == 1)
			{
				ft_digit(str, dico);
				//thousand
			}
			else if (ft_atoi(str) % 3 == 2)
			{
				ft_2digits(str, dico, size);
				// thousand
			}
			else
			{
				ft_3digits(str, dico, size);
				//thousand
			}
		}
}

2235 = 4
54789 = size = 5
666555 = 6


2 1000 2 100 30 5
50 4 1000 7 100 80 9
6 100 60 6 1000 5 100 50 5

size = 4 (4 <= size <= 6) -> thousand
*/
