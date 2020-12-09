/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:09:12 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/30 13:59:45 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(){
	char *str = "Sadfasfsut,.";
	//char str[] = {'S', 'a', 'l', 'u', 't', 't', 'f'};
	//char *str[] = {"Sss", "a", "l", "u", "t", "sdfsg"};
	//int ssize = sizeof(str); 
	//int a;

	//printf("%d ", ssize);
	//ft_strlen(str);
	printf("%d!!", ft_strlen(str));

	return(0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
