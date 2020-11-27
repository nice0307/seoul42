#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(){
	char dest[10]={0};
	char src[5] = {1, 2, 3, 4, 5};
	int n = 3;
	*ft_strncpy(dest, src, n);
	printf("%s ", dest);

}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	for (i = 0; i < n && src[i] !='\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}
