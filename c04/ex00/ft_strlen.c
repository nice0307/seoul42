#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = "Saluuuuut~";

	printf("%d", ft_strlen(str));
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	i = 0;
	len= 0;
	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
