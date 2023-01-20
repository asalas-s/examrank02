#include <unistd.h>

int	ft_isseparator(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isseparator(argv[1][i]) == 1)
			i++;
		while ((ft_isseparator(argv[1][i]) == 0) && (argv[1][i] != '\0'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
