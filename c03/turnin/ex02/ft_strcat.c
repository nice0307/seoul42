/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:17:20 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 18:17:59 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dest_len(char *dest);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_dest_len(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		dest[len + i] = '\0';
	}
	return (dest);
}

int		ft_dest_len(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
