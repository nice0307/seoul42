/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:24:21 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 16:25:26 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(){
	int tab[] = {1, 2, 3, 4, 5, 21, 34, 45};
	int size = sizeof(tab)/sizeof(tab[0]);
	
	printf("%d ", size);
	ft_rev_int_tab(tab, size);

	return(0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while(i < size / 2)
	{
		swap = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = swap;
		i++;
	}
	for (int j=0; j<size; j++)
		printf("%d, ", tab[j]);
}
