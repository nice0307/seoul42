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

void ft_putstr(char *str);

int main(){

	char strr[] = {'S','a','l','u','t'};
	int size = sizeof(strr);
	printf("%d", size);
	ft_putstr(strr);

	return(0);
}

void	ft_putstr(char *str)
{
	char *result = "Saddfsfsdgdfblut";
	int len = sizeof(str);
	int i;

	i = 0;

	printf("%d ", len);

	int llen = sizeof(result);
	printf("%d", llen);
	while(str[8])
	{
		write(1, result[i], 100);
		i++;
	}
}
