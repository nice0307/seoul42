#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int i;
	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}

	return (1);
}

int	main(void) //char *argv[])
{
	int	nresult;

	nresult =ft_is_prime(844);  //ex06

	printf("%d", nresult);

	return (0);
}
