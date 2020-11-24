#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);

int	main()
{
	  ft_print_comb();
	  	return(0);
}

void	ft_print_comb()
{
	int num[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int itr = sizeof(num)/sizeof(int);
	char comb1;
	char comb2;
	char comb3;
	char qu = ',';
	char sp = ' ';
	int comb[] ={0};
	int len =9;
	char a='g';
	char b='o';
	char ded = ',';
	//while(num[len])

	//write(1,&comb1,sizeof(char));


	for(int i = 0; i < 8; i++)
	{	
		comb1 = i + 48;	
	
		for(int j = i + 1; j < 9; j++)
		{
			comb2 = j + 48;
		
			for(int k = j + 1; k < 10; k++)
			{
				comb3 = k + 48; 
			
				if(i == 7 && j == 8 && k == 9)
				{
					write(1, &comb1, 1);
					write(1, &comb2, 1);
					write(1, &comb3, 1);
				} else
				{	
					write(1, &comb1, 1);
					write(1, &comb2, 1);
					write(1, &comb3, 1);
					write(1, &qu, 1);
					write(1, &sp, 1);
				}	
			}
		}		
	}
}
