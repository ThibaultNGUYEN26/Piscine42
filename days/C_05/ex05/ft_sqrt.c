/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:48 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/25 16:41:19 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	float	a;
	float	b;
	int		pres;

	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	a = nb;
	b = nb;
	pres = 20;
	while (pres > 0)
	{
		b = b + a / b;
		b /= 2;
		pres--;
	}
	if (b - (int)b != 0)
		return (0);
	return (b);
}

/*int	main(void)
{
	printf("sqrt(0)  : %d\n", ft_sqrt(0));
	printf("sqrt(1)  : %d\n", ft_sqrt(1));
	printf("sqrt(9)  : %d\n", ft_sqrt(9));
	printf("sqrt(7)  : %d\n", ft_sqrt(7));
	printf("sqrt(81) : %d\n", ft_sqrt(81));
	printf("sqrt(2147395600) : %d\n", ft_sqrt(2147395600));
}*/
