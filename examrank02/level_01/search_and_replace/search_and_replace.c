#include <unistd.h>

char	ft_replace(char str, char a, char b)
{
	if (str == a)
		return (b);
	else
		return (str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	str;

	i = 0;
	if (argc == 4)
	{
		while ((argv[1][i] != '\0') && (argv[2][1] == '\0') && (argv[3][1] == '\0'))
		{
			str = ft_replace(argv[1][i], argv[2][0], argv[3][0]);
			write(1, &str, 1);
		i++;
		}
	}
	write (1, "\n", 1);
}
