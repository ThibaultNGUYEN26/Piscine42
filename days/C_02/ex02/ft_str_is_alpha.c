/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:18:17 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/20 14:51:46 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("WOW : %d\n", ft_str_is_alpha("WOW"));
	printf("W0W : %d\n", ft_str_is_alpha("W0W"));
	printf("123 : %d\n", ft_str_is_alpha("123"));
	printf("    : %d\n", ft_str_is_alpha(""));
}*/
