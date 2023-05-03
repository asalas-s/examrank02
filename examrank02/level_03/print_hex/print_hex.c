#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

char	ft_charhex(int pos, char *str)
{
	return (str[pos]);
}

void	ft_putnumberhex(int n)
{
	int	p;
	int	r;

	p = n / 16;
	r = n % 16;
	if (p != 0)
		ft_putnumberhex(p);
	else
	{
		if (r < 0)
			ft_putchar('-');
	}
	if (r < 0)
		r = -r;
	ft_putchar(ft_charhex(r, "0123456789abcdef"));
}

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		ft_putnumberhex(num);
	}
	ft_putchar('\n');
}
