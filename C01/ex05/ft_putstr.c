/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:33:26 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 14:08:22 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putstr(char *str);

int main(){

	//char str[] = {'S','a','l','u','t', ','};
	char *str = "Salutdfsdfsdfsfsfsdf";
	ft_putstr(str);
	return(0);
}

void	ft_putstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	write(1, str, count * sizeof(char));
}
