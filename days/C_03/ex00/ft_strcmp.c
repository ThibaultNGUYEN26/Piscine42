/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:33:03 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 10:44:10 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("ft_strcmp -> ABC | CBA : %d\n", ft_strcmp("ABC", "CBA"));
	printf("ft_strcmp -> WOW | WOW : %d\n", ft_strcmp("WOW", "WOW"));
	printf("ft_strcmp -> CBA | ABC : %d\n", ft_strcmp("CBA", "ABC"));
	printf("ft_strcmp ->     | ABC : %d\n", ft_strcmp("", "ABC"));
	printf("ft_strcmp -> ABC |     : %d\n", ft_strcmp("ABC", ""));
	printf("ft_strcmp ->     |     : %d\n", ft_strcmp("", ""));
	printf("ft_strcmp -> WOW | WO  : %d\n", ft_strcmp("WOW", "WO"));
	printf("ft_strcmp -> WO  | WOW : %d\n", ft_strcmp("WO", "WOW"));
	printf("ft_strcmp -> WOW | OU  : %d\n", ft_strcmp("WOW", "OU"));
	printf("ft_strcmp -> OU  | WOW : %d\n", ft_strcmp("OU", "WOW"));
	printf("strcmp -> ABC | CBA : %d\n", strcmp("ABC", "CBA"));
	printf("strcmp -> WOW | WOW : %d\n", strcmp("WOW", "WOW"));
	printf("strcmp -> CBA | ABC : %d\n", strcmp("CBA", "ABC"));
	printf("strcmp ->     | ABC : %d\n", strcmp("", "ABC"));
	printf("strcmp -> ABC |     : %d\n", strcmp("ABC", ""));
	printf("strcmp ->     |     : %d\n", strcmp("", ""));
	printf("strcmp -> WOW | WO  : %d\n", strcmp("WOW", "WO"));
	printf("strcmp -> WO  | WOW : %d\n", strcmp("WO", "WOW"));
	printf("strcmp -> WOW | OU  : %d\n", strcmp("WOW", "OU"));
	printf("strcmp -> OU  | WOW : %d\n", strcmp("OU", "WOW"));
}*/
