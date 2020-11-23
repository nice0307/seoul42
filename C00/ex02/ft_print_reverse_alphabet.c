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

void ft_print_reverse_alphabet(void){

	char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int num = sizeof(alpha)/sizeof(char);

	for(int i=0; i<num; i++)
		write(1,&alpha[i],sizeof(char));
}
