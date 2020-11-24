#include <unistd.h>
#include <stdio.h>

void    ft_putnbr(int nb);

int     main()
{
	int a = 102;
	ft_putnbr(a);
	return(0);
}       

void    ft_putnbr(int nb)
{
	int input = nb, i, j=10, count;

	for(i = 0, j = 1; i < 10; i++, j *=10)
	{
		if(input / j == 0)
		{
			count = i - 1;
			break;
		}
	}

	char str[count + 1];
	
	for(i = 0; i <= count; i++)
	{
		str[i] = input % 10 + '0';
		input -=input % 10;
		input /= 10;
	}
	int size = sizeof(str)/sizeof(char);
	for(i = 0; i < size / 2; i++)
	{
		char temp = str[i];
		str[i] = str[(size - 1) - i];
		str[(size - 1) - i] = temp;
	}
		write(1, str, sizeof(char)*size);
	       	
}

