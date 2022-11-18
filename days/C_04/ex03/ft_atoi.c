/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:24:14 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 11:38:25 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_minus(char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (str[i])
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	return (minus);
}

int	ft_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	entier;

	i = ft_spaces(str);
	entier = 0;
	while ((str[i] == '+') || (str[i] == '-'))
		i++;
	if ((str[i] < '0') || (str[i] > '9'))
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		entier = entier * 10 + str[i] - '0';
		i++;
	}
	if (ft_minus(str) % 2 == 1)
		entier *= -1;
	return (entier);
}

/*int   main(void)
{
    printf("%d\n", ft_atoi("\t-++----2147483649bba"));
    printf("%d\n", atoi("\t-++----2147483649bba"));
}*/
