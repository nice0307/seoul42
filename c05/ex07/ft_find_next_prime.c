
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)   //ex07
{
	int	i;
	int	k;
	int	prime;

	i = nb;

	if (nb <= 2)
	{
		return 2;
	}

	while (i)
	{
		k = 2;
		prime = 1;
		while (k < i)
		{
			if (i % k == 0)
			{
				prime = 0;
				break;
			}
			k++;
		}

		if (prime == 1)
		{
			return i;
		}

		i++;
	}
}

int	main(int argc) //char *argv[])
{
	int	nresult;


	nresult = ft_find_next_prime(90);   //ex07

	printf("%d", nresult);


	return (0);
}
