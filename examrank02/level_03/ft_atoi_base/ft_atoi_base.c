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

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	ft_isvalidchar(char c, int str_base)
{
	int	pos;

	pos = ft_charinstr(ft_tolower(c), "0123456789abcdef");
	if ((pos != -1) && (pos < str_base))
		return (1);
	else
		return (0);
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
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isvalidchar(str[i], str_base) == 1)
	{
		b = ft_charinstr(ft_tolower(str[i]), "0123456789abcdef");
		n = ((n * str_base) + b);
		i++;
	}
	return (n * sign);
}

int	main(int argc, char **argv)
{
	int	number;
	int	base;

	if (argc == 3)
	{
		base = ft_atoi_base(argv[2], 10);
		number = ft_atoi_base(argv [1], base);
		printf("%s , en base %s es %d\n", argv[1], argv[2], number);
	}
}
