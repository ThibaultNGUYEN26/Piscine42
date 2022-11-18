/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:04:32 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/25 14:28:17 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("0!  : %d\n", ft_recursive_factorial(0));
	printf("1!  : %d\n", ft_recursive_factorial(1));
	printf("2!  : %d\n", ft_recursive_factorial(2));
	printf("5!  : %d\n", ft_recursive_factorial(5));
	printf("10! : %d\n", ft_recursive_factorial(10));
	printf("-1! : %d\n", ft_recursive_factorial(-1));
}*/
