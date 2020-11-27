#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n);
void	ft_print_combn2nd(int nNum, int nHandle, int nDigit, char *str);

int	main()
{ 
	ft_print_combn(3);
	return(0);
}

void	ft_print_combn2nd(int nNum, int nHandle, int nDigit, char *str)
{
	char	qu = ',';
	char	sp = ' ';
	int	i;
	
	i = nNum;
	while (i < 10)
	{
		str[nHandle] = i + 48;
		if (nHandle + 1 < nDigit * sizeof(char))
		{
			ft_print_combn2nd(i + 1, nHandle + 1, nDigit, str);
		}
		else
		{
			write(1, str, nDigit);
			if (str[nDigit - 1] == '9' && str[0] == 10 - nDigit + 48)
			{
				break ;
			}
			else
				
				write(1, &qu, 1);
				write(1, &sp, 1);
		}
		i++;
	}
}
void	ft_print_combn(int n)
{
	char	strVals[9];
	ft_print_combn2nd(0, 0, n, strVals);
}
