/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:50:05 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/23 15:50:28 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(){
	ft_print_reverse_alphabet();
	return(0);
}

void	ft_print_reverse_alphabet(void)
{
	char rstr = 122;

	while(rstr > 96)
	{	
		write(1,&rstr,sizeof(char));
		rstr--;
	}
}
