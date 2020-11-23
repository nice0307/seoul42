/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:48:33 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/23 20:37:43 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ftc(int *a, int *b);

int main(){
	int *a = 3;
	int *b = 4;
	
	ftc(*a, *b);
	printf("%d, " "%d", *a, *b);
	return(0);
}

void ftc(int *a, int *b){
	int swap = *b;
	*b = *a;
	*a = swap;
}
