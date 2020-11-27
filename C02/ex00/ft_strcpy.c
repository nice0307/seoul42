/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:54:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 17:17:33 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

int main(){
	char dest[5] = {0};
	char *src = "Salut";
	char *desttt;

	desttt = ft_strcpy(dest, src);
	//strncpy(dest, src, 4);
	//char destt = ft_strcpy(dest, src);
	//write(1, dest, 5);
	printf("%s", desttt);
	return(0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;
	int j = 0;
	
	while(src[i] != '\0')
	{
		count++;
		i++;
	}
	char destt[count];
	char swap;
	j =0;

//	destt[0] = src[0];
	while(j < count)
	{	
//		swap = src[count -1 -j];
//		src[count -1 -j] = src[j];
//		src[j] = swap;
		destt[j] = src[j];
		j++;
	}
	printf("%d ", count);
	printf("%s!", destt);
	//char *addr = destt;
	return destt;
}
