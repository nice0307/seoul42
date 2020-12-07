/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:54:27 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 14:58:14 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult = ft_recursive_factorial(3); // ex01
	printf("%d", nresult);


	return (0);
}
