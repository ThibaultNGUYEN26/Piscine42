/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:35:09 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 14:16:41 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	check_negative(int x, int y)
{
	if ((x < 0) && (y < 0))
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while ((i <= y) && (check_negative(x, y) == 0))
	{
		j = 1;
		while (j <= x)
		{
			if (((i == 1) && (j == 1)) || ((i == 1) && (j == x)))
				ft_putchar('o');
			else if (((i == y) && (j == x)) || ((i == y) && (j == 1)))
				ft_putchar('o');
			else if ((i == 1) || (i == y))
				ft_putchar('-');
			else if ((j == 1) || (j == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
