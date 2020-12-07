/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:10:39 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/07 15:13:52 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	return_val;

	return_val = 1;
	if (nb < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
		{
			while (power > 0)
			{
				return_val *= nb;
				power--;
			}
		}
	}
	return (return_val);
}
