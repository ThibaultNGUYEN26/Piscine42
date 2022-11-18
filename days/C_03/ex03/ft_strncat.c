/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:14:42 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/20 15:42:53 by thibnguy         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;
	int		i;

	p = dest + ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && nb != 0)
	{
		p[i] = src[i];
		i++;
		nb--;
	}
	p[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[100] = "Incr";
	char	src[] = "oyable";
	int	nb = 1;
	ft_strncat(dest, src, nb);
	printf("ft_strncat : %s\n", dest);

	char	dest2[100] = "Incr";
	char	src2[] = "oyable";

	strncat(dest2, src2, nb);
	printf("strncat : %s\n", dest2);

	char	dest3[100] = "";
	char	src3[] = "";

	ft_strncat(dest3, src3, nb);
	printf("ft_strncat : %s\n", dest3);

	char	dest4[100] = "";
	char	src4[] = "";

	strncat(dest4, src4, nb);
	printf("strncat : %s\n", dest4);

	char	dest5[100] = "";
	char	src5[] = "WOW";

	ft_strncat(dest5, src5, nb);
	printf("ft_strcat : %s\n", dest5);

	char	dest6[100] = "";
	char	src6[] = "WOW";

	strncat(dest6, src6, nb);
	printf("strncat : %s\n", dest6);

	char	dest7[100] = "OH";
	char	src7[] = "";

	ft_strncat(dest7, src7, nb);
	printf("ft_strncat : %s\n", dest7);

	char	dest8[100] = "OH";
	char	src8[] = "";

	strncat(dest8, src8, nb);
	printf("strncat : %s\n", dest8);
}*/
