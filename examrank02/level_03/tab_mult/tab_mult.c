#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
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
	return (n * sign);
}

int	main(int argc, char **argv)
{
	int	num;
	int	i;

	i = 1;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putchar(i + '0');
			ft_putstr(" x ");
			ft_putnumber(num);
			ft_putstr(" = ");
			ft_putnumber(i * num);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
}
