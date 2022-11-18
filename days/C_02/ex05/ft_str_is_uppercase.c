/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:53:32 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/19 11:53:45 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("wow : %d\n", ft_str_is_uppercase("wow"));
	printf("Wow : %d\n", ft_str_is_uppercase("Wow"));
	printf("WOW : %d\n", ft_str_is_uppercase("WOW"));
	printf("123 : %d\n", ft_str_is_uppercase("123"));
	printf("W0W : %d\n", ft_str_is_uppercase("W0W"));
	printf("    : %d\n", ft_str_is_uppercase(""));
}*/
