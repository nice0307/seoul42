#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);

int	main()
{
	  ft_print_comb2();
	  	return(0);
}

void	ft_print_comb2()
{
	int num[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	char del = ' ';
	int itr = sizeof(num)/sizeof(int);
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 9; j++)
		{
   			for(int g = i; g < 10; g++)			
			{
				for(int z = j+1; z < 10; z++)
				{
					a = i;
					b = j;
					c = g;
					z = z; 
					write(1,&a,sizeof(int));
					write(1,&b,sizeof(int));
					write(1,&c,sizeof(int));
					write(1,&d,sizeof(int));
					write(1,&del,1);
					//printf("%d%d %d%d, ", i, j, g, z);
	        		}
			}

		}		//write(1, &c, 1);

	}
}
