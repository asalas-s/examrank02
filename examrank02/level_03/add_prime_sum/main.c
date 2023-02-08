#include <unistd.h>

int	ft_isprime(int n)
{
	int	i;
	int	notprime;

	i = 3;
	notprime = 0;
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
	{
		while ((i <= (n / 2)) && (notprime == 0))
		{
			if ((n % i) == 0)
				notprime = 1;
			i++;
		}
		if (notprime == 0)
			return (1);
	}
	return (0);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]))
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		while ((str[i] >= 48) && (str[i] <= 57))
		{
			n = ((n * 10) + (int)(str[i] - 48));
			i++;
		}
	}
	return (n * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int n)
{
	int	p;
	int	r;

	p = n / 10;
	r = n % 10;
	if (p != 0)
		ft_putnumber(p);
	else
	{
		if (r < 0)
			ft_putchar('-');
	}
	if (r < 0)
		r = -r;
	ft_putchar(r + '0');
}

int	main(int argc, char **argv)
{
	int	num;
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	if (argc == 2)
	{
		num = ft_atoi (argv[1]);
		if (num > 1)
		{
			while (i <= num)
			{
				if (ft_isprime(i) == 1)
					sum = sum + i;
				i++;
			}
			ft_putnumber(sum);
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putnumber(0);
		ft_putchar('\n');
	}
}
