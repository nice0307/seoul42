#include <stdio.h>

int	ft_atoi(char *str);
int	ft_atoi_int(char *str);
int	ft_atoi_minus(char *str, char *atoi);
char	*ft_atoi_num(char *str);

int	main(void)
{
	char *str = "  - - -+ -12354a4b2567";
	//char str[] =" - --+ -12342314hjh";

	printf("%d\n", ft_atoi(str));
	return (0);
}

int	ft_atoi(char *str)
{
	int	minuscount;
	int	val;
	int	i;
	char	*atoi;

	i = 0;
	minuscount = ft_atoi_minus(str, atoi);
	atoi = ft_atoi_num(str);
	val = ft_atoi_int(atoi);
	if (minuscount == 1 || minuscount % 2 != 0)
		val =  val * -1;
	return (val);
}

char	*ft_atoi_num(char *str)
{
	int	i;
	char	*ptr;

	while(str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			ptr = &str[i];
			break ;
		}	
		//else if (stir[i] > 57 || str[i] < 9)
		//	break ;
		//else if (str[i] < 48) //&& str[i] < 32)
		//	if
		//	break ;	
		//else if 
		i++;
	}
	return (ptr);
}

int	ft_atoi_minus(char *str, char *atoi)
{
	int	i;
	int	minuscount;

	i = 0;
	minuscount = 0;
	while (str[i] !='\0')
	{
		if (str[i] == 45)
			minuscount++;
		else if (str[i] > 47 && str[i] < 58)
			break ;
		i++;
	}
	return (minuscount);
}

int	ft_atoi_int(char *atoi)
{
	int	val;
	int	i;
	
	val = 0;
	i = 0;
	while (atoi[i] != '\0')
	{
		if (atoi[i] < 48 || atoi[i] > 57)
			break ;
		else
			val = val + (atoi[i] - 48);
		val *= 10;
		i++;
	}
	val = val / 10;
	return (val);
}
