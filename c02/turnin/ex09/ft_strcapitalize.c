/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:30:56 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 11:31:01 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize2nd(char *str);

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
	ft_strcapitalize2nd(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	return (str);
}

char	*ft_strcapitalize2nd(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 57 && str[i] < 65 && str[i + 1] > 96 && str[i + 1] < 123)
			str[i + 1] -= 32;
		else if (str[i] > 90 && str[i] < 97)
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
		}
		else if (str[i] < 48 || str[i] > 122)
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
