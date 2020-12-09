/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:44:58 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 16:19:06 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(){
	char dest[20] = "abcdEFdsfsfsfGH";
	char *src = "Saldfudft!!";
	//int	srcc[5] = {1,2,3,4,5};
	//int n = sizeof(dest);
	//ft_strlcpy(dest, src, 5);
	printf("%s ", dest);
	//iprintf("%ls", strlcpy(dest, src, 5));
	printf("%u!", ft_strlcpy(dest, src, 5));
	printf("%s", dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	val;

	val = 0;
	while (src[val] != '\0')
		val++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (val);
}
