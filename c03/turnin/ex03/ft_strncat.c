/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 09:38:03 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 10:44:51 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dest_len(char *dest);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;
	char			*tmp;

	tmp = dest;
	i = 0;
	len = ft_dest_len(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		dest[len + i] = '\0';
	}
	return (tmp);
}

int		ft_dest_len(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	return (len);
}
