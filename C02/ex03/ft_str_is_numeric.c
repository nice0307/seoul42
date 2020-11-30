/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:46:50 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/30 21:50:57 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char *str = "123 ";

	//ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	val;
	int	i;

	i = 0;
	if (str[0] == '\0')
		val = 1;
	while (str[i] != '\0')
	{
		if (47 < str[i] && str[i] < 58)
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
