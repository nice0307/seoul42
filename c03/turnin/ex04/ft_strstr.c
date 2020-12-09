/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:56:26 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 10:18:36 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dest_len(char *str);
int		ft_str_match(char *str, char *to_find, int i, int len);

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

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		len;
	int		matching_data;

	matching_data = 0;
	i = 0;
	ptr = 0;
	len = ft_dest_len(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] && matching_data == 0)
		{
			matching_data = ft_str_match(str, to_find, i, len);
			if (matching_data == 1)
			{
				ptr = &str[i];
				break ;
			}
		}
		i++;
	}
	return (ptr);
}

int		ft_str_match(char *str, char *to_find, int i, int len)
{
	int	matching_data;
	int	n;
	int	k;

	matching_data = 1;
	n = i + 1;
	k = 1;
	while (k < len)
	{
		if (to_find[k] != str[n])
		{
			matching_data = 0;
			break ;
		}
		n++;
		k++;
	}
	return (matching_data);
}
