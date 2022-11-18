/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:42:20 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 11:09:57 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0 || size_dest >= size)
		return (size_src + size);
	else if (i <= (size - size_dest - 1) && src[i])
	{
		dest[size_dest + i] = *(src);
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}

/*int	main(void)
{
	char	dest[20] = "Incr";
	char	src[] = "oyable";
	int	nb = 1;

	printf("ft_strlcat : %u\n", ft_strlcat(dest, src, nb));

	char	dest2[20] = "Incr";
	char	src2[] = "oyable";

	printf("strlcat : %lu\n",strlcat(dest2, src2, nb));

	char	dest3[20] = "";
	char	src3[] = "";

	printf("ft_strlcat : %u\n", ft_strlcat(dest3, src3, nb));

	char	dest4[20] = "";
	char	src4[] = "";

	printf("strlcat : %lu\n", strlcat(dest4, src4, nb));

	char	dest5[20] = "";
	char	src5[] = "WOW";

	printf("ft_strlcat : %u\n", ft_strlcat(dest5, src5, nb));

	char	dest6[20] = "";
	char	src6[] = "WOW";

	printf("strlcat : %lu\n", strlcat(dest6, src6, nb));

	char	dest7[20] = "OH";
	char	src7[] = "";

	printf("ft_strlcat : %u\n", ft_strlcat(dest7, src7, nb));

	char	dest8[20] = "OH";
	char	src8[] = "";

	printf("strlcat : %lu\n", strlcat(dest8, src8, nb));
}*/
