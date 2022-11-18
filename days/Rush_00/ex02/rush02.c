/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:42:44 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/16 19:49:58 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	check_negative(int x, int y)
{
	if ((x < 0) || (y < 0))
		return (1);
	return (0);
}

int	ft_test(int x, int y)
{
	int	test;

	test = 0;
	if ((x == 1) || (y == 1))
		test = 1;
	return (test);
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	t;
	int	neg;

	i = 1;
	t = ft_test(x, y);
	while ((i <= y) && (check_negative(x, y) == 0))
	{
		j = 1;
		while (j <= x)
		{
			if (((i == 1) && (j == 1)) || ((i == 1) && (j == x) && (t == 0)))
				ft_putchar('A');
			else if (((i == y) && (j == 1)) || ((i == y) && (j == x)))
				ft_putchar('C');
			else if ((i == 1) || (i == y) || (j == 1) || (j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
