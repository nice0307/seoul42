/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:50:51 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/23 19:12:06 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);

int main(){
	//char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	ft_print_alphabet();
	return(0);
}

void	ft_print_alphabet()
{
	char str = 97;
	while (str < 123)
	{
		write(1, &str, sizeof(char));
		str++;
	}	
}
