/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:16:49 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 15:20:19 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
		{
			if (power % 2 == 0)
				return (ft_recursive_power(nb * nb, power / 2));
			else if (power % 2 == 1)
				return (nb * ft_recursive_power(nb * nb, (power - 1) / 2));
		}
	}
	return (0);
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult = ft_recursive_power(10,5); // ex03


	printf("%d", nresult);





	return (0);
}
