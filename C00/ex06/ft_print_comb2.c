/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:28:37 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 19:03:18 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);

int	main()
{
	  ft_print_comb2();
	  	return(0);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
	char sp;
	char qu;
	int i;
	int j;
	int k;
	int n;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	sp = ' ';
	qu = ',';
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			k = i;
			while (k < 10)
			{
				n = j + 1;
				while (n < 10)
				{
					a = i + 48;
					b = j + 48;
					c = k + 48;
					d = n + 48;
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &sp, 1);
					write(1, &c, 1);
					write(1, &d, 1);
					if (i == 9 && j == 8)
						break ;
					else
						write(1, &qu, 1);
						write(1, &sp, 1);
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
