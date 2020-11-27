#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void); 

int main()
{
	ft_print_numbers();
	return (0);
}

void ft_print_numbers(void)
{
	int i;
	int num;
	
	i = 0;
	while (i < 10)
	{
		num = i + 48;
		write(1, &num, 1);
		i++;
	}
}
