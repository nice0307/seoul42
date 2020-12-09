/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:29:07 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 13:39:20 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len[100];

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len[i] = j + 1;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < arg)
	{
		write(1, argv[i], len[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
