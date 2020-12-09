/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:47:09 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 15:36:36 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_int(char *str);
int		ft_atoi_minus(char *str);
char	*ft_atoi_num(char *str);

int		ft_atoi(char *str)
{
	int		minuscount;
	int		val;
	int		i;
	char	*atoi;

	i = 0;
	minuscount = ft_atoi_minus(str);
	atoi = ft_atoi_num(str);
	val = ft_atoi_int(atoi);
	if (minuscount == 1 || minuscount % 2 != 0)
		val = val * -1;
	return (val);
}

char	*ft_atoi_num(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			ptr = &str[i];
			break ;
		}
		i++;
	}
	return (ptr);
}

int		ft_atoi_minus(char *str)
{
	int	i;
	int	minuscount;

	i = 0;
	minuscount = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			minuscount++;
		else if (str[i] > 47 && str[i] < 58)
			break ;
		i++;
	}
	return (minuscount);
}

int		ft_atoi_int(char *atoi)
{
	int	val;
	int	i;

	val = 0;
	i = 0;
	while (atoi[i] != '\0')
	{
		if (atoi[i] < 48 || atoi[i] > 57)
			break ;
		else
			val = val + (atoi[i] - 48);
		val *= 10;
		i++;
	}
	val = val / 10;
	return (val);
}
