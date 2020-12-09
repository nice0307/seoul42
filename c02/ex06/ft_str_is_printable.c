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

int	ft_str_is_printable(char *str);

int main(void)
{
	char *str = "sie df";

	printf("%d", ft_str_is_printable(str));
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int     val;
	int	i;
	
	i = 0;
	if (str[0] == '\0')
		val = 1;
	while (str[i] != '\0')
	{
		if (31 < str[i])
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
