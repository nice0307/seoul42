/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:23:10 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 15:02:36 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_dest_len(char *dest);

int				main(void)
{
	char	dest[20] = "abcdefghi";
	//char	*src = "ABCDEFGHI";
	//char	*aaa = "00000";
	char	aaa[10] = "ABCDEF";
	//aaa[0] = 'A';
	//aaa[1] = 'B';
	//aaa[2] = '0';
	//aaa[3] = 'D';
	//aaa[4] =
	printf("%d\n", ft_strlcat(dest, aaa, 15));
	printf("%s\n", dest);
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	val;

	val = 0;
	while (*dest && val < size)
	{
		++dest;
		++val;
	}
	while (*src && val + 1 < size)
	{
		*dest = *src;
		++src;
		++val;
		++dest;
	}
	if (val < size)
		*dest = 0;
	while (*src)
	{
		++src;
		++val;
	}
	return (val);
}
