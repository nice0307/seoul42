/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:42:42 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 14:54:00 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int return_val;

	return_val = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return_val *= nb;
		nb--;
	}
	return (return_val);
}
