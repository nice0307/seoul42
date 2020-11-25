/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:36:51 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 20:58:03 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putnbr(int nb);

int     main()
{
	int a = 12345;
	ft_putnbr(a);
	return(0);
}       

void	ft_putnbr(int nb)
{
	int i;
	int j;
	int count;
	char temp;
	int size;

	i = 0;
	j = 1;
	while (i < 10)
	{
		if (nb / j == 0)
		{
			count = i;
			break ;
		}
		i++;
		j *= 10;
	}
	char str[count];

//	i = 0;

	while (count > 0 )
	{
		str[count - 1] = nb % 10 + 48;
		nb -= nb % 10;
		nb /= 10;
		count--;
	}
//	while (i < count)
//	{
//		str[i] = nb % 10 + 48;
//		nb -= nb % 10;
//		nb /= 10;
//		i++;
//	}
//	size = sizeof(str);
//	printf("%d ", size);
//	i = 0;
//	while (i < size / 2)
//	{
//		temp = str[i];
//		str[i] = str[(size - 1) - i];
//		str[(size - 1) - i] = temp;
//		i++;
//	}
	write(1, str, sizeof(str)/sizeof(char));
}

