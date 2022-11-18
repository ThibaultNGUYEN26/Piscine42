/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:37:42 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/19 11:52:24 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("wow : %d\n", ft_str_is_lowercase("wow"));
	printf("Wow : %d\n", ft_str_is_lowercase("Wow"));
	printf("WOW : %d\n", ft_str_is_lowercase("WOW"));
	printf("123 : %d\n", ft_str_is_lowercase("123"));
	printf("W0W : %d\n", ft_str_is_lowercase("W0W"));
	printf("    : %d\n", ft_str_is_lowercase(""));
}*/
