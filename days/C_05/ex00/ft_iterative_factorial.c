/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:58:12 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/25 15:15:15 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

/*int	main(void)
{
	printf("0!  : %d\n", ft_iterative_factorial(0));
	printf("1!  : %d\n", ft_iterative_factorial(1));
	printf("2!  : %d\n", ft_iterative_factorial(2));
	printf("5!  : %d\n", ft_iterative_factorial(5));
	printf("10! : %d\n", ft_iterative_factorial(10));
	printf("-1! : %d\n", ft_iterative_factorial(-1));
	printf("0!  : %d\n", ft_iterative_factorial(-87));
	printf("0!  : %d\n", ft_iterative_factorial(0));
	printf("0!  : %d\n", ft_iterative_factorial(0));
	printf("0!  : %d\n", ft_iterative_factorial(1));
	printf("0!  : %d\n", ft_iterative_factorial(2));
	printf("0!  : %d\n", ft_iterative_factorial(12));
}*/
