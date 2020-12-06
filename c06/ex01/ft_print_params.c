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
	while (i < argc) 
	{
		write(1, argv[i], len[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
