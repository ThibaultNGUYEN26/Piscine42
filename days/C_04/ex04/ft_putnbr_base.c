/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:02:20 by thibnguy          #+#    #+#             */
/*   Updated: 2022/07/21 11:42:12 by thibnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	while (*s1 != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		else if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

char	*convertion(int nbr, int conv_n)
{
	char	convert_n[50];
	char	temp_char;
	int		i;
	int		j;
	int		rev;
	int		temp;

	i = 0;
	if (conv_n == 16)
	{
		temp = 0;
		while (nbr > 0)
		{
			temp = nbr % 16;
			if (temp < 10)
				temp += 48;
			else
				temp += 55;
			convert_n[i] = temp;
			i++;
			nbr /= 16;
		}
	}
	else
	{
		while (nbr > 0)
		{
			convert_n[i] = ((nbr % conv_n) + '0');
			nbr /= 2;
			i++;
		}
	}
	rev = i - 1;
	while (j < i / 2)
	{
		temp_char = convert_n[j];
		convert_n[j] = convert_n[rev];
		convert_n[rev] = temp_char;
		j++;
		rev--;
	}
	return (convert_n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	convert[50];
	int		i;
	int		j;
	int		initial;

	initial = nbr;
	if (base[0] == '\0' || base[1] == '\0')
		convert[0] = '\0';
	else if (base == "0123456789")
	{
		if (nbr < 10)
			convert[0] = nbr + '0';
		else
		{
			i = 0;
			while (nbr >= 10)
			{
				nbr /= 10;
				i++;
			}
			nbr = initial;
			j = 0;
			while (j < i)
			{
				convert[i] = (nbr / 10) + '0';
				nbr = nbr / 10;
			}	
		}
	}
	else if (ft_strcmp(base, "01") == 0)
		ft_strcpy(convert, convertion(nbr, 2));
	else if (ft_strcmp(base, "01") == 0)
		ft_strcpy(convert, convertion(nbr, 2));
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)
		ft_strcpy(convert, convertion(nbr, 16));
	else if (ft_strcmp(base, "poneyvif") == 0)
		ft_strcpy(convert, convertion(nbr, 8));
	while (convert[i] != '\0')
	{
		write(1, &convert[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putnbr_base(26, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(26, "01");
	write(1, "\n", 1);
	ft_putnbr_base(26, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(26, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(26, "");
}*/
