#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_bits(unsigned char octec)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octec >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char	octec;

	octec = 0;
	print_bits(octec);
	ft_putchar('\n');

	octec = 1;
	print_bits(octec);
	ft_putchar('\n');

	octec = 2;
	print_bits(octec);
	ft_putchar('\n');

	octec = 3;
	print_bits(octec);
	ft_putchar('\n');

	octec = 4;
	print_bits(octec);
	ft_putchar('\n');

	octec = 5;
	print_bits(octec);
	ft_putchar('\n');

	octec = 6;
	print_bits(octec);
	ft_putchar('\n');

	octec = 7;
	print_bits(octec);
	ft_putchar('\n');

	octec = 8;
	print_bits(octec);
	ft_putchar('\n');

	octec = 9;
	print_bits(octec);
	ft_putchar('\n');
}
