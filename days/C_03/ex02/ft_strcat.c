/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:23:53 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/20 15:43:05 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*p;
	int		i;

	p = dest + ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "Incr";
	char	src[] = "oyable";
	
	ft_strcat(dest, src);
	printf("ft_strcat : %s\n", dest);
	
	char	dest2[100] = "Incr";
	char	src2[] = "oyable";

	strcat(dest2, src2);
	printf("strcat : %s\n", dest2);

	char	dest3[100] = "";
	char	src3[] = "";
	
	ft_strcat(dest3, src3);
	printf("ft_strcat : %s\n", dest3);
	
	char	dest4[100] = "";
	char	src4[] = "";

	strcat(dest4, src4);
	printf("strcat : %s\n", dest4);

	char	dest5[100] = "";
	char	src5[] = "WOW";
	
	ft_strcat(dest5, src5);
	printf("ft_strcat : %s\n", dest5);
	
	char	dest6[100] = "";
	char	src6[] = "WOW";

	strcat(dest6, src6);
	printf("strcat : %s\n", dest6);

	char	dest7[100] = "OH";
	char	src7[] = "";
	
	ft_strcat(dest7, src7);
	printf("ft_strcat : %s\n", dest7);
	
	char	dest8[100] = "OH";
	char	src8[] = "";

	strcat(dest8, src8);
	printf("strcat : %s\n", dest8);
}*/
