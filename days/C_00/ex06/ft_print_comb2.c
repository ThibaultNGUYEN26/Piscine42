/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:02:54 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 11:13:29 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int c, char s)
{
	if (c <= 9)
	{
		ft_putchar('0');
		ft_putchar(c + '0');
		ft_putchar(s);
	}
	else
	{
		ft_putchar((c / 10) + '0');
		ft_putchar((c % 10) + '0');
		ft_putchar(s);
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_write(n1, ' ');
			if ((n1 == 98) && (n2 == 99))
			{
				ft_write(n2, '\0');
			}
			else
			{
				ft_write(n2, ',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
