#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

void print_bits(unsigned char octec)
{
	int	i;
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
	print_bits(reverse_bits(octec));
	ft_putchar('\n');

	octec = 1;
	print_bits(octec);
	ft_putchar('\n');
	print_bits(reverse_bits(octec));
	ft_putchar('\n');

	octec = 2;
	print_bits(octec);
	ft_putchar('\n');
	print_bits(reverse_bits(octec));
	ft_putchar('\n');

	octec = 3;
	print_bits(octec);
	ft_putchar('\n');
	print_bits(reverse_bits(octec));
	ft_putchar('\n');

	octec = 4;
	print_bits(octec);
	ft_putchar('\n');
	print_bits(reverse_bits(octec));
	ft_putchar('\n');
}

