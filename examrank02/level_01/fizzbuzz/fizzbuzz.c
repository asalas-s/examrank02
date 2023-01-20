#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
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

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			ft_putstr("fizzbuzz");
		else if (((i % 3) == 0) && ((i % 5) != 0))
			ft_putstr("fizz");
		else if (((i % 3) != 0) && ((i % 5) == 0))
			ft_putstr("buzz");
		else
			ft_putnumber(i);
		ft_putstr("\n");
		i++;
	}
}
