#include <unistd.h>

char	*ft_charinstr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*pos;

	i = 0;
	if (argc == 3)
	{
		pos = argv[2];
		while ((argv[1][i]) != '\0')
		{
			pos = ft_charinstr(pos, argv[1][i]);
			if (pos != NULL)
			{
				i++;
				pos++;
			}
			else
				break ;
		}
		if (pos != NULL)
			write(1, argv[1], ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
}
