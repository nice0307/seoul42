/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:48:33 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 12:37:55 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

int main(){
	int a = 3;
	int b = 4;
	
	ft_swap(&a, &b);
	printf("%d %d", a, b) ;
	//write(1,&b, sizeof(int));
	return(0);
}

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
