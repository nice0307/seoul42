/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:21:53 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 13:28:34 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 0;
	argc = 1;
	len = 0;
	while (argv[0][i] != '\0')
	{
		len++;
		i++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
