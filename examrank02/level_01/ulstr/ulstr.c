#include <unistd.h>

int	ft_reverse(int a)
{
	if ((a >= 65) && (a <= 90))
		return (a + 32);
	else if ((a >= 97) && (a <= 122))
		return (a - 32);
	else
		return (a);
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
			c = ft_reverse(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
