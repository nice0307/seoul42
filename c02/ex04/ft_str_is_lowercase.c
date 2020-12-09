/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:53:03 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/30 22:03:07 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str = "sjkdhkajewgnjkab";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	val;
	int	i;

	i = 0;
	if (str[0] == '\0')
		val = 1;
	while (str[i] != '\0')
	{
		if (96 < str[i] && str[i] < 123)
			val = 1;
		else
		{
			val = 0;
			break ;
		}
		i++;
	}
	return (val);
}
