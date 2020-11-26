/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:52:13 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 23:08:33 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);

int	main()
{
	  ft_print_comb();
	  	return(0);
}

void	ft_print_comb(void)
{
	char	comb1;
	char	comb2;
	char	comb3;
	char	qu;
	char	sp;
	int		i;
	int		j;
	int		k;

	qu = ',';
	sp = ' ';
	i = 0;
	while (i < 8)
	{
		comb1 = i + 48;
		j = i + 1;
		while (j < 9)
		{
			comb2 = j + 48;
			k = j + 1;
			while (k < 10)
			{	
				comb3 = k + 48;
				write(1, &comb1, 1);
				write(1, &comb2, 1);
				write(1, &comb3, 1);
				if (i == 7 && j == 8 && k == 9)
					break ;
				else
				
					write(1, &qu, 1);
					write(1, &sp, 1);
				
				k++;
			}
			j++;
		}
		i++;
	}
}
