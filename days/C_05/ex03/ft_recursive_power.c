/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:11:25 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 13:39:36 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("2^-3 : %d\n", ft_recursive_power(2, -3));
	printf("0^0  : %d\n", ft_recursive_power(0, 0));
	printf("2^0  : %d\n", ft_recursive_power(2, 0));
	printf("2^3  : %d\n", ft_recursive_power(2, 3));
	printf("5^5  : %d\n", ft_recursive_power(5, 5));
	printf("-5^0 : %d\n", ft_recursive_power(-5, 0));
}*/
