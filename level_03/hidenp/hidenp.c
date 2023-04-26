#include <unistd.h>
#include <stdio.h>

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

int	main(int argc, char **argv)
{
	int	i;
	int	prev;
	int	pos;

	i = 0;
	prev = 0;
	pos = 0;
	if (argc == 3)
	{
		while ((argv[1][i]) != '\0')
		{
			pos = ft_charinstr(&argv[2][prev], argv[1][i]);
			if (pos != -1)
				prev = prev + pos + 1;
			else
				break ;
			i++;
		}
		if (pos != -1)
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
}
