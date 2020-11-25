/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:26:11 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/25 16:51:14 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(){
	int tab[] = {3, 4, 10, 5, 2, 1};
	int size= sizeof(tab)/sizeof(tab[0]);
	
	printf("%d ", size);
	ft_sort_int_tab(tab, size);

	return(0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int j;

	i = 0;
	while(i < size)	
	{
		j = 0;
		while(j < size - 1 - i)
		{
			if(tab[j] > tab[j + 1])
			{
				temp  = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	for(int k = 0; k < size; k++)
		printf("%d ", tab[k]);
}
