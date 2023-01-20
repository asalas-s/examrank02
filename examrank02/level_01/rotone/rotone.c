#include <unistd.h>

int	ft_rotone(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		c = c + 1;
		if (c > 90)
			c = 65;
	}
	if ((c >= 97) && (c <= 122))
	{
		c = c + 1;
		if (c > 122)
			c = 97;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			c = ft_rotone(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
