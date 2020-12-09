/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:36:51 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 10:36:33 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putnbrminus(unsigned int maxnb, unsigned int maxcount);
void	ft_putnbrplus(int nb, int count);


int     main()
{
	int a = 0;
	int b = 2147483647;
	int c = 4000;
	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	ft_putnbr(c);
	return (0);
}

void	ft_putnbr(int nb)
{
	unsigned int	maxnb;
	unsigned int	maxcount;
	int				count;
	char			zero;

	if (nb < 0)
	{
		maxnb = nb * -1;
		maxcount = 1;
		write(1, "-", 1);
		ft_putnbrminus(maxnb, maxcount);
	}
	else if (nb == 0)
	{
		zero = nb + 48;
		write(1, &zero, 1);
	}
	else
	{
		count = 1;
		ft_putnbrplus(nb, count);
	}
}

void	ft_putnbrminus(unsigned int maxnb, unsigned int maxcount)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	str;

	i = 0;
	j = 1000000000 / maxcount;
	if (maxnb / j != 0)
	{
		str = maxnb / j + 48;
		write(1, &str, 1);
		maxnb = maxnb % j;
		if (maxnb != 0)
			ft_putnbrminus(maxnb, maxcount * 10);
		else if (maxnb == 0)
		{
			while (j > 1)
			{
				write(1, "0", 1);
				j /= 10;
			}
		}
	}
	else
		ft_putnbrminus(maxnb, maxcount * 10);
}

void	ft_putnbrplus(int nb, int count)
{
	int		i;
	int		j;
	char	str;

	i = 0;
	j = 1000000000 / count;
	if (nb / j != 0)
	{
		str = nb / j + 48;
		write(1, &str, 1);
		nb = nb % j;
		if (nb != 0)
			ft_putnbrplus(nb, count * 10);
		else if (nb == 0)
		{
			while (j > 1)
			{
				write(1, "0", 1);
				j /= 10;
			}
		}
	}
	else
		ft_putnbrplus(nb, count * 10);
}
