/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:06 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 11:12:06 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main(){
	char *str = "sdghdfgndflkn";
	int n;

	n = ft_str_is_alpha(str);
	printf("%d!", n);
	return(0);
}

int	ft_str_is_alpha(char *str)
{
	int	val;
	int	i;

	i = 0;
	if (str[0] == '\0')
		val = 1;
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
		{
			val = 1;
		}
		else if (96 < str[i] && str[i] < 123)
		{
			val = 1;
		}
		else
		{
			val = 0;
			break ;
		}
		i++;
	}
	return (val);
}
