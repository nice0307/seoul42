/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:51:09 by wookchoi          #+#    #+#             */
/*   Updated: 2020/11/23 17:16:34 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

int	main(){
	
	char a = 'F';
	ft_putchar(a);

}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
