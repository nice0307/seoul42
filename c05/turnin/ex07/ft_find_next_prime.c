/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:13:55 by wookchoi          #+#    #+#             */
/*   Updated: 2020/12/09 13:19:50 by wookchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;
	int	prime;

	i = nb;
	if (nb <= 2)
		return (2);
	while (i)
	{
		k = 2;
		prime = 1;
		while (k < i)
		{
			if (i % k == 0)
			{
				prime = 0;
				break ;
			}
			k++;
		}
		if (prime == 1)
			return (i);
		i++;
	}
	return (0);
}
