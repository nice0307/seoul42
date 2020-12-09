/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:54:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 12:48:21 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(){
	char	dest[26] = "";
	char	*src = "Saaaaaalut";

	//desttt = ft_strcpy(dest, src);
	//strncpy(dest, src, 4);
	//char destt = ft_strcpy(dest, src);
	//write(1, dest, 5);
	printf("%s", ft_strcpy(dest, src));
	return(0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
