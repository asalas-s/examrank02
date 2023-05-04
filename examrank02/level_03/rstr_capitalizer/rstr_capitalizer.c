#include <unistd.h>

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

void	ft_putlower(char c)
{
	if (((c >= 'A') && (c <= 'Z')))
		ft_putchar(c - 'A' + 'a');
	else
		ft_putchar(c);
}

void	ft_putupper(char c)
{
	if (((c >= 'a') && (c <= 'z')))
		ft_putchar(c - 'a' + 'A');
	else
		ft_putchar(c);
}

void	ft_rcapitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
		while ((ft_isspace(str[i]) == 0) && (str[i] != '\0'))
		{
			if (((str[i + 1]) == '\0') || ft_isspace(str[i + 1])) 
				ft_putupper(str[i]);
			else
				ft_putlower(str[i]);
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
			ft_rcapitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
}
