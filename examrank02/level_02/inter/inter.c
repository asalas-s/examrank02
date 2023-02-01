#include <unistd.h>

int	ft_charinstr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
	i++;
	}
	if (c == '\0')
		return (i);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while ((argv[1][i]) != '\0')
		{
			while ((argv[2][j]) != '\0')
			{
				if (((argv[1][i]) == (argv[2][j])) && (ft_charinstr(argv[1], argv[1][i]) == i) && (ft_charinstr(argv[2], argv[2][j]) == j))
					write (1, &argv[1][i], 1);
				j++;
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
