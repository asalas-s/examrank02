#include <unistd.h>

int ft_cts(int c)
{
	if ((c >= 65) && (c <= 90))
		return (c + 32);
	else
		return (c);	
}

int main(int argc, char **argv)
{
	int i;
	int c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			c = ft_cts(argv[1][i]);
			if (c != argv[1][i])
				write(1, "_", 1);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
