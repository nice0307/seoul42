/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:38:24 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 12:52:57 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(){
	int a = 13;
	int b = 4;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d and %d", a, b, div, mod);
	return(0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
