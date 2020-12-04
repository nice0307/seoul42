#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_dest_len(char *dest);

int	main(void)
{
	char	dest[20] = "abcdefghi";
	//char	*src = "ABCDEFGHI";
	//char	*aaa = "00000";
	char	aaa[10] = "ABCDEF";
	//aaa[0] = 'A';
	//aaa[1] = 'B';
	//aaa[2] = '0';
	//aaa[3] = 'D';
	//aaa[4] = 'E';

	printf("%d", ft_strlcat(dest, aaa, 10));
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len_dest;

	len_dest = 0;
	len_dest = ft_dest_len(dest);
	//printf("%d ", len_dest);
	//printf("%s ", dest);
	if (size > len_dest + 1)
	{
		i = 0;
		while (i < size - len_dest -1)
		{
			dest[len_dest + i] = src[i];
			i++;
			dest[len_dest + i] = '\0';
		}
	}
	else if(size == len_dest + 1)
		dest[size - 1] = '\0';

	len_dest = ft_dest_len(dest);
	//printf("%d!", len_dest);
	//printf("%s!", dest);
	return (len_dest);
}

int	ft_dest_len(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
