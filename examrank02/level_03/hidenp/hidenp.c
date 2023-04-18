#include <unistd.h>
#include <stdio.h>

int	ft_charinstr(char c, char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') && (str[i] != c))
		i++;
	if (str[i] == c)
		return (i);
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while ((j != -1) && (argv[1][i] != '\0'))
		{
			j = ft_charinstr(argv[1][i], &argv[2][j]);
			i++;
		}
		if (argv[1][i] == '\0')
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
}
