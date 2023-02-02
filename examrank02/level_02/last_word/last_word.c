#include <stdio.h>
#include <unistd.h>

int	ft_issep(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
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
	int		len;
	int		end;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		if (len != 0)
		{
			len--;
			while (ft_issep(argv[1][len]) && (len > 0))
				len--;
			end = len;
			while ((ft_issep(argv[1][len]) == 0) && (len >= 0))
				len--;
			write(1, &argv[1][len + 1], end - len);
		}
	}
	write(1, "\n", 1);
}
