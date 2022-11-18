/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:39:32 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 11:44:46 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb *= temp;
			power--;
		}
	}
	return (nb);
}

/*int	main(void)
{
	printf("2^-3 : %d\n", ft_iterative_power(2, -3));
	printf("0^0  : %d\n", ft_iterative_power(0, 0));
	printf("2^0  : %d\n", ft_iterative_power(2, 0));
	printf("2^3  : %d\n", ft_iterative_power(2, 3));
	printf("5^5  : %d\n", ft_iterative_power(5, 5));
	printf("-5^0 : %d\n", ft_iterative_power(-5, 0));
	printf("0^-5 : %d\n", ft_iterative_power(0, -5));
	printf("0^5  : %d\n", ft_iterative_power(0, 5));
}*/
