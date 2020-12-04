#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int	ft_putnbr_len(char *base);
int	ft_putnbr_validate(char *base);
char	*ft_putnbr_change(char *base, char *result, int nbr, int len);
char	*ft_putnbr_swap(char *result);

int	main(void)
{
	int	nbr = -300;
	char	*base = "01"; //"poneyvif";

	ft_putnbr_base(nbr, base);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	symbol;
	char	result[20];
	int	val;

	val = ft_putnbr_validate(base);
	if (val == 0)
	{
		symbol = 0;
		if (nbr < 0)
		{
			nbr = nbr * -1;
			symbol = 1;
		}	
		ft_putnbr_change(base, result, nbr, ft_putnbr_len(base));
		if (symbol == 1)
			write(1, "-", 1);
		write(1, result, ft_putnbr_len(result));
		write(1, "\n", 1);
	}
	else
		write(1, "", 1);
}

char	*ft_putnbr_change(char *base, char *result, int nbr, int len)
{
	int	i;
	
	i = 0;
	while (nbr != 0)
	{
		result[i] = base[nbr % len];
		result[i + 1] = '\0';
		nbr = nbr / len;
		if (nbr == 0)
			break ;
		i ++;
	}
	ft_putnbr_swap(result);
	return (result);
}

char	*ft_putnbr_swap(char *result)
{
	char	swap;
	int	len;
	int	i;

	len = ft_putnbr_len(result);
	while (i < len / 2)
	{
		swap = result[len - 1 - i];
		result[len - 1 - i] = result[i];
		result[i] = swap;
		i++;
	}
	return (result);
}

int	ft_putnbr_validate(char *base)
{
	int	val;
	int	i;
	int	j;

	val = 0;
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == 0 || base [i] == 43 || base[i] == 45)
			{
				val = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	if (ft_putnbr_len(base) == 1)
		val = 1;
	return (val);
}

int	ft_putnbr_len(char *base)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while(base[i] != '\0')
	{
		len++;
		i++;
	}
	//printf("%d ", len);
	return (len);
}
