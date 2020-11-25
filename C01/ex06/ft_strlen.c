/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:09:12 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 15:23:32 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(){
	//char *str = "Salut";
	char str[] = {'S', 'a', 'l', 'u', 't', 't', 'f'};
	//char *str[] = {"Sss", "a", "l", "u", "t", "sdfsg"};
	int ssize = sizeof(str)/sizeof(str[0]); 
	int a;

	printf("%d ", ssize);
	//a = ft_strlen(str);
	printf("%d!!", ft_strlen(str));

	return(0);
}

int	ft_strlen(char *str)
{
	int result;
	char strr[8] = {0};
	int a;
	int i;
	int len = 0;

	while (len)
	{
		strr[len] = str[len];
		printf("%c", strr[len]);
		len++;
	}

//	i = 0;
//	while (i < 7)
//	{
//		strr[i] = str[i];
//		printf("%c", strr[i]);
//		i++;
//	}
//	result = sizeof(strr) / sizeof(strr[0]);
//	//a =sizeof(strr);
//	//printf("%d?", a);
//	//printf("%c", strr[1]);

	return(len - 1);

}
