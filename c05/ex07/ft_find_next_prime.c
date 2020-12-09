/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:13:55 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 13:19:03 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;
	int	prime;

	i = nb;
	if (nb <= 2)
		return (2);
	while (i)
	{
		k = 2;
		prime = 1;
		while (k < i)
		{
			if (i % k == 0)
			{
				prime = 0;
				break ;
			}
			k++;
		}
		if (prime == 1)
			return (i);
		i++;
	}
	return (0);
}

int	main(void) //char *argv[])
{
	int	nresult;


	nresult = ft_find_next_prime(4);   //ex07

	printf("%d", nresult);


	return (0);
}
