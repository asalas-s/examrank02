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
		return (-1);
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
	int	i;
	int	len1;
	int	len2;
	int	pos;
	int	ant;

	i = 0;
	pos = 0;
	ant = 0;
	len1 = ft_strlen(argv[1]);
	len2 = ft_strlen(argv[2]);
	if (argc == 3)
	{
		while ((argv[1][i]) != '\0')
		{
			pos = ft_charinstr(argv[2], argv[1][i]);
			if (pos == -1)
				break ;
			if ((pos > ant) && (pos < len2))
			{
				ant = pos;
				i++;
			}
			else
				break ;
		}
		write (1, argv[1], len1);
	}
	write(1, "\n", 1);
}
