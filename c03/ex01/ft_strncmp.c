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



#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strncmp_value(char *s1, char *s2, int ite);

int	main(void)
{
	char		*s1 = "Salutr";
	char		*s2 = "Salut3ef";

	//desttt = ft_strcpy(dest, src);
	//strncpy(dest, isrc, 4);
	//char destt = ft_strcpy(dest, src);
	//write(1, dest, 5);
	printf("%d", ft_strncmp(s1, s2, 10));
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	len;
	int	val;

	i = 0;
	len = 0;
	printf("%s %s\n", s1, s2);
	while (s1[i] != '\0')
	{
		len++;
		i++;
	}
	if (n == 0)
		val = 0;
	else if (n <= len)
		val = ft_strncmp_value(s1, s2, n);
	else
		val = ft_strncmp_value(s1, s2, len);
	return (val);
}

int	ft_strncmp_value(char *s1, char *s2, int ite)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while (i < ite)
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
