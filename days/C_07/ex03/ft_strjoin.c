/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:52:20 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/28 18:44:50 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		nb_sep;
	int		size_sep;
	int		i;
	int		j;

	nb_sep = size - 1;
	size_sep = ft_strlen(sep);
	i = 0;
	res = malloc(size * nb_sep * size_sep * sizeof(char));
	if (size == 0)
		return (res);
	while (strs[i])
		i++;
	j = 0;
	while (j < (i - 1))
	{
		ft_strcat(res, strs[j]);
		ft_strcat(res, sep);
		j++;
	}
	ft_strcat(res, strs[j]);
	j = ft_strlen(res);
	res[j] = '\0';
	return (res);
}

int	main(int argc, char *argv[])
{
	char	*sep = " | * | j'aime les chiens au BARBECUE | * | ";
	printf("%s\n", ft_strjoin(argc, argv, sep));
}
