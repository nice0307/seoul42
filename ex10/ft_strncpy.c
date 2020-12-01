/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:47:44 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/30 20:11:05 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

int main(){
	char dest[10] = {0};
	char *src = "Saldfut!!";
	//int	srcc[5] = {1,2,3,4,5};
	//int n = sizeof(dest);
	//ft_strlcpy(dest, src, 5);
	//printf("%s", ft_strlcpy(dest, src, 4));
	//iprintf("%ls", strlcpy(dest, src, 5));
	printf("%ls!", ft_strlcpy(dest, src, 5));
}

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	val;
	int	j;
	
	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	
	val = 0;
	while (dest[val] != '\0')
	{
		val++;
	}
	printf("%s!", dest);
	printf("%u", val);
	return (&val);
}

