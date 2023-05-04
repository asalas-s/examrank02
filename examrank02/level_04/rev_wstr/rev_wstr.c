#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i != argc)
		{
			ft_rcapitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
}
