/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:52:13 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 12:05:00 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);
void	ft_print_comb2nd(int ncount, int nnum, char *comb);

int	main()
{
	  ft_print_comb();
	  	return(0);
}

void	ft_print_comb(void)
{
	char	comb[3];

	ft_print_comb2nd(3, 0, comb);
}

void	ft_print_comb2nd(int ncount, int nnum, char *comb)
{
	int		i;

	if (ncount < 3)
		i = 1 + comb[nnum - 1] - 48;
	else
		i = nnum;
	while (i < nnum + 8)
	{
		comb[nnum] = i + 48;
		if (ncount > 1)
			ft_print_comb2nd(ncount - 1, nnum + 1, comb);
		else
		{
			write(1, comb, 3);
			if (comb[0] == '7' && comb[2] == '9')
				break ;
			else
				write(1, ", ", 2);
		}
		i++;
	}
}
