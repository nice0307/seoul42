#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);

int	main()
{
	int num = 2;  
	ft_print_combn(num);
	return(0);
}

void	ft_print_combn(int n)
{
		int num[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		char *str="abcd";
		int itr = sizeof(num)/sizeof(int);
		int i = 0;
		int j;
		int a;	
		char qu = ' ';
		while (i < 9)
		{
			a = i + 48;
			//j = i + 1 + 48;
			write(1, &a, 1);
			if(1 < n)
			{
				ft_print_combn(--n);
			}
			write(1, &qu, 1);
			i++;		
	  	}
}
