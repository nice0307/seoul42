/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:28:37 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/02 21:32:54 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);
void	ft_print(char *comb);
void	ft_print_comb2nd(int ncount, int nnum, char *comb);
int		ft_ivalue(int ncount, char *comb);
int		ft_jvalue(int ncount, char *comb);

int	main()
{
	  ft_print_comb2();
	  	return(0);
}

void	ft_print_comb2(void)
{
	char	comb[5];

	ft_print_comb2nd(0, 0, comb);
}

void	ft_print(char *comb)
{
	if (comb[0] == '9' && comb[1] == '8')
		write(1, comb, 5);
	else
	{
		write(1, comb, 5);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2nd(int ncount, int nnum, char *comb)
{
	int		i;
	int		j;

	i = ft_ivalue(ncount, comb);
	while (i < 10)
	{
		comb[nnum] = i + 48;
		j = ft_jvalue(ncount, comb);
		while (j < 10)
		{
			comb[nnum + 1] = j + 48;
			if (ncount == 0)
			{
				comb[nnum + 2] = ' ';
				ft_print_comb2nd(ncount + 1, nnum + 3, comb);
			}
			else
				ft_print(comb);
			j++;
		}
		i++;
	}
}

int		ft_ivalue(int ncount, char *comb)
{
	int	i;

	i = 0;
	if (ncount == 1)
	{
		if (comb[1] == 9 + 48)
			i = 1 + comb[0] - 48;
		else
			i = comb[0] - 48;
	}
	return (i);
}

int		ft_jvalue(int ncount, char *comb)
{
	int	j;

	j = 0;
	if (ncount == 1 && comb[1] == 9 + 48)
		j = 0;
	else if (ncount == 1 && comb[0] == comb[3])
		j = comb[1] - 48 + 1;
	else
		j = 0;
	return (j);
}
