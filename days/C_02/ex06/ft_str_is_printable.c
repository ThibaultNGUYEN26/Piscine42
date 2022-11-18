/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:56:40 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/19 11:57:00 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32) || (*str > 127))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("wow : %d\n", ft_str_is_printable("wow"));
	printf("w w : %d\n", ft_str_is_printable("w w"));
	printf("w@w : %d\n", ft_str_is_printable("w@w"));
	printf("    : %d\n", ft_str_is_printable(""));
	printf("\\v  : %d\n", ft_str_is_printable("\v"));
}*/
