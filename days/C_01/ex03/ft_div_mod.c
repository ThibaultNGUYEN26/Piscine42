/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:45:12 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 11:52:28 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int	b;
	int	div;
	int	mod;
	int	*foo;
	int	*foo1;
	int	*foo2;
	int	*foo3;

	a = 4;
	b = 2;
	div = 0;
	mod = 0;
	foo = &div;
	foo1 = &mod;
	ft_div_mod(a, b, foo, foo1);
	printf("div : %d | mod : %d", div, mod);
}*/
