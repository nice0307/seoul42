#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_sort(char *argv, int len);
int	*ft_len(char *argv, int *len, int i);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len[100];
	char	argv_sort[100];

	i = 0;
	while (i < argc)
	{
		ft_len(argv[i], len, i);
		i++;
	}
	i = 1;
	while (i < argc) 
	{
		write(1, ft_sort(argv[i], len[i]), len[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	*ft_len(char *argv, int *len, int i)
{
	int	j;

	j = 0;
	while (argv[j] != '\0')
	{
		len[i] = j + 1;
		j++;
	}
	return (len);
}

char	*ft_sort(char *argv, int len)
{
	char	swap;
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (argv[j] > argv[j + 1] && argv[j + 1] != '\0')
			{
				swap = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (argv);
}
