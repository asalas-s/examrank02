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

char	*ft_last_word(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len == 0)
		return (str);
	len--;
	while (ft_issep(str[len]) && (len > 0))
		len--;
	while ((ft_issep(str[len]) == 0) && (len >= 0))
		len--;
	return (&str[len + 1]);
}

int	main(int argc, char **argv)
{
	char	*lw;
	int		i;

	if (argc == 2)
	{
		lw = ft_last_word(argv[1]);
		i = 0;
		while (ft_issep(lw[i]) == 0)
		{
			write(1, &lw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
