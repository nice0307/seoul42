#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	i;
	//int	j;
	int	len;

	i = 1;
	while (i < argc) 
	{
		len = 0;
		while (argv[argc - i][len])
			len++;
		write(1, argv[argc - i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
