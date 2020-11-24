/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:12:53 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/23 21:29:47 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ftc(int *nbr);

int	main(){

	int result;
	ftc(&result);
	printf("%d", result);
	write(1, &result, sizeof(int));
	return(0);
}

void	ftc(int *nbr)
{
	*nbr = 40;
}
