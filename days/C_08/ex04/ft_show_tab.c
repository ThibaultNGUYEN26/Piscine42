/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:07:39 by thibnguy          #+#    #+#             */
/*   Updated: 2022/08/02 21:36:16 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_argc_pow(int x, int n)
{
	int	pow;

	pow = 1;
	while (n > 1)
	{
		pow *= x;
		n--;
	}
	return (pow);
}

void	ft_argc_putnbr_pos(int nb)
{
	int		size;
	int		n;
	char	digit;

	size = 0;
	n = nb;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	while (size > 1)
	{
		digit = nb / ft_argc_pow(10, size) % 10 + '0';
		write(1, &digit, 1);
		size--;
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		ft_argc_putnbr_pos(nb);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
