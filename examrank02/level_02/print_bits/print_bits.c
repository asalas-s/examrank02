#include <unistd.h>

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

