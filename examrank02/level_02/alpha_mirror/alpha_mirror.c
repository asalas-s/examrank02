#include <unistd.h>

char	ft_mirror(char c)
{
	if ((c >= 65) && (c <= 90))
		return ('Z' + 'A' - c);
	else if ((c >= 97) && (c <= 122))
		return ('z' + 'a' - c);
	else
		return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			c = ft_mirror(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
