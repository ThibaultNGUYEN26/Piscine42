/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:03:01 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 19:04:28 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_str_is_lowercase(char *str, int i)
{
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
	i++;
	ft_str_is_lowercase(str, i);
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			&& ((str[i - 1] < 'A') || (str[i - 1] > 'Z'))
			&& ((str[i - 1] < 'a') || (str[i - 1] > 'z'))
			&& ((str[i - 1] < '0') || (str[i - 1] > '9')))
				str[i] -= 32;
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			if ((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str2[] = "saLut, cOMMEnt vas ? 42mots quarante-deux; cinqt+et+un";
	char 	str[] = "Rekt17+LOl Mdr Mdr 4242l42$";
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
