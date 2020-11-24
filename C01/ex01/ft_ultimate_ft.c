#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main()
{
	
      	int result;
      	int *a = &result;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;

	ft_ultimate_ft(&h);
	printf("%d", result);  	
	return(0);
}

void	ft_ultimate_ft(int *********nbr)
{
	  
	*********nbr=44;
}
