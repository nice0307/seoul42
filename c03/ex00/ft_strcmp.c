#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "123455789";
	char *s2 = "12345g789";

	printf("%d",ft_strcmp(s1, s2));
	return (0);
}

int     ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		*s1++;
		*s2++;
	}
	if (*s1 != *s2)
		return(*s1 - *s2);
	return (0);
}
