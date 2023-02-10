#include <stdio.h>
#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_charinstr(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	n;
	int	sign;
	int	b;

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
		b = ft_charinstr(str[i], "0123456789abcde");
		while ((b != -1) && (b < str_base) && (str[i] != '\0'))
		{
			n = ((n * str_base) + b);
			i++;
			b = ft_charinstr(str[i], "0123456789abcde");
		}
	}
	if ((b != -1) && (b < str_base))
		return (n * sign);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc == 2)
	{
		number = ft_atoi_base(argv [1], 2);
		printf("%s , en base 2 es %d\n", argv[1], number);
	}
}
