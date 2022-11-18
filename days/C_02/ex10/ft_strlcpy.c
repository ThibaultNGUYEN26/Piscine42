/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:16:19 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/19 19:00:51 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1 && size > 0)
		{
			dest[j] = src[j];
			j++;
		}	
		i++;
	}
	dest[j] = '\0';
	return (i);
}

/*int	main(void)
{
	unsigned int	size = 1;
	char 	src[] = "tre";
	char	dest[] = "";
	
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%lu\n", strlcpy(dest, src, size));
}*/
