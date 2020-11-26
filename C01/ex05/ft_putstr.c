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
	//char str[6];
	printf(" %d", size);
	ft_putstr(strr);
	printf(" %s", strr);
	//write(1, str, 6);
	return(0);
}

void	ft_putstr(char *str)
{
	int sizz = sizeof(*str);
	printf("-%d-", sizz);
	printf("%s", str);
	write(1, str, 1);
}
