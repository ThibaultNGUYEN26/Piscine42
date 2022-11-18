/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:20:45 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 12:20:47 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (to_find[j] != '\0')
		return (NULL);
	return (str + (i - j));
}

/*int	main(void)
{
	char	str[] = "Piscine de juillet a 42 Nice";
	char	to_find[] = "is";
	char	*ret;

	ret = ft_strstr(str, to_find);
	printf("%s\n", ret);

	char	str2[] = "Piscine de juillet a 42 Nice";
	char	to_find2[] = "is";
	char	*ret2;

	ret2 = strstr(str2, to_find2);
	printf("%s\n", ret2);
}*/
