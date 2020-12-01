/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:19:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 18:33:51 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[] = {'A','B','C','D','G'};

	printf("%s", ft_strlowcase(str));
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
