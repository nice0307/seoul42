/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:29:20 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 23:03:15 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "Salut";
	char	*s2 = "Salut3ef";

	//desttt = ft_strcpy(dest, src);
	//strncpy(dest, isrc, 4);
	//char destt = ft_strcpy(dest, src);
	//write(1, dest, 5);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	printf("%s %s\n", s1, s2);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			val = -1;
			break ;
		}
		else if (s1[i] > s2[i])
		{
			val = 1;
			break ;
		}
		else
			val = 0;
		i++;
	}
	return (val);
}
