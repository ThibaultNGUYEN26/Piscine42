/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:58:18 by thibnguy          #+#    #+#             */
/*   Updated: 2022/08/02 21:39:11 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(copy, src));
}

struct s_stock_str	*ft_strs_to_tab(int argc, char *argv[])
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (argc + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < argc && argv[i] != 0)
	{
		tab[i].size = ft_strlen(argv[i]);
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(argv[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

/*int	main(void)
{
	struct s_stock_str *tab;
	int	ac = 3;
	char *av[] = {"riri", "mvfsk", "abcdefg"};

	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
	return (0);
}*/
