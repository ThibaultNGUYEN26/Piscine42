/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:49:12 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 11:54:45 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int *foo;
	int	*foo1;

	a = 4;
	b = 2;
	foo = &a;
	foo1 = &b;
	ft_ultimate_div_mod(foo, foo1);
	printf("a : %d | b : %d", a, b);
}*/
