/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:04:06 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 10:21:45 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	val;
	int	i;

	i = 0;
	if (str[0] == '\0')
		val = 1;
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			val = 1;
		else
		{
			val = 0;
			break ;
		}
		i++;
	}
	return (val);
}
