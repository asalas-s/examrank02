#include <unistd.h>

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
	(void)argv;
	ft_putnumber(argc - 1);
	ft_putchar('\n');
}
