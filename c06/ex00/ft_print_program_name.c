#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 0;
	while (argv[0][i] !='\0')
	{
		len++;
		i++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
