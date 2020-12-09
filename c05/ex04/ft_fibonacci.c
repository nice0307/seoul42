/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:27:29 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 11:29:11 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index <= 2 && index > 0)
		return (1);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult = ft_fibonacci(2);  // ex04


	printf("%d", nresult);





	return (0);
}
