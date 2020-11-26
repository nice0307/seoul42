#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);
void	ft_print_combn2nd(int a);

int	main()
{
	int num = 2;  
	ft_print_combn(num);
	return(0);
}

void	ft_print_combn(int n)
{
		//int num[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		//char *str="abcd";
		//int itr = sizeof(num)/sizeof(int);
		int i;
		//int j;
		int a;	
		char qu = ' ';
		char sp = ',';

		i = 0;
		while (i < 11 - n)
		{
			a = i + 48;
			//j = i + 1 + 48;
			//write(1, &a, 1);
			ft_print_combn2nd(a);
			if(n > 1)
			{
				ft_print_combn2nd(--n + 48);
			}
			if(i == 9)
			{
				break ;
			}
			else
			{
				write(1, &sp, sizeof(char));
				write(1, &qu, sizeof(char));
			}
			i++;		
	  	}
}
void	ft_print_combn2nd(int a)
{
	write(1, &a, sizeof(char));
	ft_print_combn2nd(--a);
}
