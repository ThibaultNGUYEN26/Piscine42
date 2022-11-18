/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:49:38 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/16 19:41:29 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	check_negative(int x, int y)
{
	if ((x < 0) && (y < 0))
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

	i = 1;
	t = ft_test(x, y);
	while ((i <= y) && (check_negative(x, y) == 0))
	{
		j = 1;
		while (j <= x)
		{
			if (((i == 1) && (j == 1)) || ((i == y) && (j == x) && (t == 0)))
				ft_putchar('/');
			else if (((i == y) && (j == 1)) || ((i == 1) && (j == x)))
				ft_putchar('\\');
			else if ((i == 1) || (i == y) || (j == 1) || (j == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
