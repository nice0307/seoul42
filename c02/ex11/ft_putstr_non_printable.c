/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:19:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 12:56:39 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);
char	*ft_hexa(char *hexa, int dec);
char	*ft_hexa_change(char *hexa);

int main(void)
{
	char str[21] = "Coucou\ntu vas bien ?";//{'C','o','u','c','o','u','\n','t','u',' ','v','a','s',' ','b','i','e','n',' ','?'};
	//char str[8];

//	str[1] = 10;
//	str[1] = '0';
//	str[2] = 1;
//	str[3] = 't';
//	str[4] = ' ';
//	str[5] = '?';

	ft_putstr_non_printable(str);
	//printf("%s", str);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		dec;
	char	hexa[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			dec = str[i];
			ft_hexa(hexa, dec);
			write(1, "\\", 1);
			write(1, hexa, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

char	*ft_hexa(char *hexa, int dec)
{
	int		position;
	int		mod;

	position = 0;
	while (1)
	{
		mod = dec % 16;
		if (mod < 10)
			hexa[position] = 48 + mod;
		else
			hexa[position] = 65 + (mod - 10);
		dec = dec / 16;
		position++;
		if (dec == 0)
			break ;
	}
	ft_hexa_change(hexa);
	return (hexa);
}

char	*ft_hexa_change(char *hexa)
{
	int		i;
	char	swap;

	swap = hexa[1];
	hexa[1] = hexa[0];
	hexa[0] = swap;
	i = 0;
	while (i < 2)
	{
		if (hexa[i] == 0)
			hexa[i] = '0';
		else if (hexa[i] > 64 && hexa[i] < 91)
			hexa[i] += 32;
		i++;
	}
	return (hexa);
}
