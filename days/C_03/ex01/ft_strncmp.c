/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:01:45 by thibnguy          #+#    #+#             */
/*   Updated: 2022/11/17 13:14:42 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	while (i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("ft_strncmp -> ABC | CBA | 2 : %d\n", ft_strncmp("ABC", "CBA", 2));
	printf("ft_strncmp -> WOW | WOW | 2 : %d\n", ft_strncmp("WOW", "WOW", 2));
	printf("ft_strncmp -> CBA | ABC | 2 : %d\n", ft_strncmp("CBA", "ABC", 2));
	printf("ft_strncmp ->     | ABC | 2 : %d\n", ft_strncmp("", "ABC", 2));
	printf("ft_strncmp -> ABC |     | 2 : %d\n", ft_strncmp("ABC", "", 2));
	printf("ft_strncmp ->     |     | 2 : %d\n", ft_strncmp("", "", 2));
	printf("ft_strncmp -> WOW | WO  | 2 : %d\n", ft_strncmp("WOW", "WO", 2));
	printf("ft_strncmp -> WO  | WOW | 2 : %d\n", ft_strncmp("WO", "WOW", 2));
	printf("ft_strncmp -> WOW | OU  | 2 : %d\n", ft_strncmp("WOW", "OU", 2));
	printf("ft_strncmp -> OU  | WOW | 2 : %d\n", ft_strncmp("OU", "WOW", 2));
	printf("strncmp -> ABC | CBA | 2 : %d\n", strncmp("ABC", "CBA", 2));
	printf("strncmp -> WOW | WOW | 2 : %d\n", strncmp("WOW", "WOW", 2));
	printf("strncmp -> CBA | ABC | 2 : %d\n", strncmp("CBA", "ABC", 2));
	printf("strncmp ->     | ABC | 2 : %d\n", strncmp("", "ABC", 2));
	printf("strncmp -> ABC |     | 2 : %d\n", strncmp("ABC", "", 2));
	printf("strncmp ->     |     | 2 : %d\n", strncmp("", "", 2));
	printf("strncmp -> WOW | WO  | 2 : %d\n", strncmp("WOW", "WO", 2));
	printf("strncmp -> WO  | WOW | 2 : %d\n", strncmp("WO", "WOW", 2));
	printf("strncmp -> WOW | OU  | 2 : %d\n", strncmp("WOW", "OU", 2));
	printf("strncmp -> OU  | WOW | 2 : %d\n", strncmp("OU", "WOW", 2));
}*/
