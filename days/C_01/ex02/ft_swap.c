/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:41:10 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 11:42:49 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*foo;
	int	*foo1;

	a = 42;
	b = 10;
	foo = &a;
	foo1 = &b;
	printf("Avant swap | a : %d, b : %d\n", a, b);
	ft_swap(foo, foo1);
	printf("Apres swap | a : %d, b : %d\n", a, b);
}*/
