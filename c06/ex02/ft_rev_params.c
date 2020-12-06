#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_rev(char *argv, char *argv_rev, int len);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len[100];
	char	argv_rev[100];

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
		write(1, ft_rev(argv[i], argv_rev, len[i]), len[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

char	*ft_rev(char *argv, char *argv_rev, int len)
{
//	char	argv_rev[len];
	int	i;

	i = 0;
	while (i < len)
	{
		argv_rev[i] = argv[len - 1 - i];
		i++;
	}
	return (argv_rev);
}
