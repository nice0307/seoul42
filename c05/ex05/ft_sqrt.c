/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:40:53 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 11:41:49 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	float	fx;
	int		nx;
	int		n;

	fx = 2.0;
	nx = 2;
	n = 0;
	if (nb < 0)
		return (0);
	while (n < 50)
	{
		nx = (nx + (nb / nx)) / 2;
		fx = (fx + (nb / fx)) / 2.0;
		n++;
	}
	if (fx > nx)
		return (0);
	return (nx);
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult = ft_sqrt(4);//ex05    check

	printf("%d", nresult);




	return (0);
}

