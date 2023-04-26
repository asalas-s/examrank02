#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((ft_isspace(argv[1][i]) == 1) && (argv[1][i] != '\0'))
			i++;
		while (argv[1][i] != '\0')
		{
			if (ft_isspace(argv[1][i]) == 0)
			{
				ft_putchar(argv[1][i]);
				i++;
			}
			else
			{
				while (ft_isspace(argv[1][i]) == 1)
					i++;
				if (argv[1][i] != '\0')
					ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}
