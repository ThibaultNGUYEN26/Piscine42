/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:16:05 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 13:44:31 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 2)
		return (0);
	else if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		nb += 1;
		while (1)
		{
			if (ft_is_prime(nb) == 1)
				return (nb);
			nb += 1;
		}
	}
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(8));
}*/
