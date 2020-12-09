/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:17:20 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/05 20:17:25 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
int	ft_dest_len(char *dest);

int	main(void)
{
	char	dest[40] = "abcdefghi";
	//char	*src = "ABCDEFGHI";
	//char	*aaa = "00000";
	char	aaa[6];
	aaa[0] = 'A';
	aaa[1] = 'B';
	aaa[2] = '0';
	aaa[3] = 'D';
	aaa[4] = 'E';

	printf("%s", ft_strcat(dest, aaa));
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_dest_len(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		dest[len + i] = '\0';
	}
	return (dest);
}

int	ft_dest_len(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
