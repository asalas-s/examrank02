#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (((str[i] == ' ') || (str[i] == '\t')) && (str[i] != '\0'))
		{
			ft_putchar(str[i]);
			i++;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z') && (str[i] != '\0'))
			ft_putchar(str[i] + 'A' - 'a');
		else
			ft_putchar(str[i]);
		i++;
		while ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\0'))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z') && (str[i] != '\0'))
				ft_putchar(str[i] + 'a' - 'A');
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i != argc)
		{
			ft_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
}
