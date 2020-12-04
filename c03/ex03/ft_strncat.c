#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_dest_len(char *dest);

int	main(void)
{
	char	dest[20] = "abcdefghi";
	//char	*src = "ABCDEFGHI";
	char	aaa[] = "00000";
	//char	aaa[17];
	//aaa[0] = 'A';
	//aaa[1] = 'B';
	//aaa[2] = '0';
	//aaa[3] = 'D';
	//aaa[4] = 'E';

	printf("%s", ft_strncat(dest, aaa, 4));
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len;

	i = 0;
	len = ft_dest_len(dest);
	while (i < nb)
	{
		dest[len + i] = src[i];
		i++;
		dest[len + i] = '\0';
	}
	return (dest);
}

int	ft_dest_len(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0; 
	while (str[i] !=0)
	{
		len++;
		i++;
	}
	return (len);
}
