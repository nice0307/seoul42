/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:23:10 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 12:13:27 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	val;

	val = 0;
	while (*dest && val < size)
	{
		++dest;
		++val;
	}
	while (*src && val + 1 < size)
	{
		*dest = *src;
		++src;
		++val;
		++dest;
	}
	if (val < size)
		*dest = 0;
	while (*src)
	{
		++src;
		++val;
	}
	return (val);
}
