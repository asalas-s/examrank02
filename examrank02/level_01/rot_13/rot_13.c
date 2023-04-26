#include <unistd.h>

int	ft_rot_13(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		c = c + 13;
		if (c > 90)
			c = c - 26;
	}
	if ((c >= 97) && (c <= 122))
	{
		c = c + 13;
		if (c > 122)
			c = c - 26;
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
			c = ft_rot_13(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
