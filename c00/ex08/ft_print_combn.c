/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:13:03 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 19:46:11 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);
void	ft_print_combn2nd(int nnum, int nhandle, int ndigit, char *str);

int	main()
{ 
	ft_print_combn(10);
	return(0);
}

void	ft_print_combn2nd(int nnum, int nhandle, int ndigit, char *str)
{
	int		i;

	i = nnum;
	while (i < 10)
	{
		str[nhandle] = i + 48;
		if (nhandle + 1 < ndigit)
		{
			ft_print_combn2nd(i + 1, nhandle + 1, ndigit, str);
		}
		else
		{
			write(1, str, ndigit);
			if (str[ndigit - 1] != '9' || str[0] != 10 - ndigit + 48)
				write(1, ", ", 2);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	strvals[9];

	ft_print_combn2nd(0, 0, n, strvals);
}
