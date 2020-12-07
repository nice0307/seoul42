/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:10:39 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 15:13:03 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	return_val;

	return_val = 1;
	if (nb < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
		{
			while (power > 0)
			{
				return_val *= nb;
				power--;
			}
		}
	}
	return (return_val);
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult = ft_iterative_power(3,5); // ex02


	printf("%d", nresult);

	return (0);
}
