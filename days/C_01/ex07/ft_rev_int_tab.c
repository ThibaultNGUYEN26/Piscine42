/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:22:02 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 14:39:46 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	temp;
	int	i;

	i = 0;
	rev = size - 1;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + rev);
		*(tab + rev) = temp;
		i++;
		rev--;
	}
}

/*int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	size;
	int	*foo;
	int	i;

	i = 0;
	size = 6;
	foo = &tab[0];
	printf("Avant tri : ");
	while (i < size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d\n", tab[i]);
	ft_rev_int_tab(foo, size);
	printf("Apres tri : ");
	i = 0;
	while (i < size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d\n", tab[i]);
}*/
