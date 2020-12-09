/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:50:04 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 12:38:48 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char		*s1 = "Salut3efer";
	char		*s2 = "Salut4ef";

	//desttt = ft_strcpy(dest, src);
	//strncpy(dest, isrc, 4);
	//char destt = ft_strcpy(dest, src);
	//write(1, dest, 5);
	printf("%d", ft_strncmp(s1, s2, 10));
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0) 
		return (0);
	while (i < n - 1 && s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
