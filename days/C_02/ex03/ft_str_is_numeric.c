/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:52:07 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/17 17:31:25 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str ++;
	}
	return (1);
}

/*int	main(void)
{
	printf("WOW : %d\n", ft_str_is_numeric("WOW"));
	printf("123 : %d\n", ft_str_is_numeric("123"));
	printf("W0W : %d\n", ft_str_is_numeric("W0W"));
	printf("    : %d\n", ft_str_is_numeric(""));
}*/
