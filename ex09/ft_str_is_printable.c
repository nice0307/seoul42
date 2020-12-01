/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:19:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 18:33:51 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[62] = {'s','a','l','u','t',',','<','c','o','M','m','e','n','t',' ','t','u',' ','v','a','s',' ','?',' ','4','2','m','o','t','s',' ','q','u','a','r','a','n','t','e','-','d','e','u','x',';',' ','c','i','n','q','u','a','n','t','e','+','e','t','+','u','n'};
	//printf("%s", str);
	printf("%s", ft_strcapitalize(str));
	write(1, &str, 62);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 57 && str[i] < 65 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] -= 32;
		else if (str[i] > 90 && str[i] < 97 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] -= 32;
		else if (str[i] < 48 || str[i] > 122)
		{	if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;	
		}
		i++;
	}
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	return (str);
}
