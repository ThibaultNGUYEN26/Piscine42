/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:38:18 by thibnguy          #+#    #+#             */
/*   Updated: 2022/08/02 14:14:29 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

t_dict	*ft_regex(char *str, int i, int element)
{
	int		j;
	t_dict	*dico;

	dico = malloc(sizeof(dico) * NB_ROWS);
	while (i < SIZE)
	{
		j = 0;
		while (str[i] != ':' && str[i] != ' ' && str[i] != '\f'
			&& str[i] != '\t' && str[i] != '\r' && str[i] != '\v')
			dico[element].number[j++] = str[i++];
		i++;
		dico[element].value[j] = '\0';
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v')
			i++;
		j = 0;
		while ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			dico[element].value[j++] = str[i++];
		i++;
		dico[element].value[j] = '\0';
		element++;
	}
	return (dico);
}

int	ft_run(char *str, t_dict *dico)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putstr("Dict error\n");
			return (0);
		}
		i++;
	}
	ft_write_all_digits(str, dico);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		fd1;
	char	*str;
	t_dict	*dico;
	int		i;

	fd1 = open("./numbers.dict", O_RDONLY);
	str = malloc(sizeof(char) * SIZE);
	read(fd1, str, SIZE);
	dico = ft_regex(str, 0, 0);
	i = 0;
	if (str != NULL)
	{
		if (argc == 2)
		{
			ft_run(argv[1], dico);
		}
	}
	free(dico);
	free(str);
	close(fd1);
	return (0);
}
