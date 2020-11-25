/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:53:53 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 13:00:58 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){
	int a = 13;
	int b =4;
	printf("%d / %d =", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d and %d", a, b);
	return(0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
