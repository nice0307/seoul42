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

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(){
	char dest[10] = {0};
	char *src = "Salut!!";
	int	srcc[5] = {1,2,3,4,5};
	int n = sizeof(dest);
	//ft_strncpy(dest, src, n);
	//printf("%s", ft_strncpy(dest, src, n));
	printf("%d!", n);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
