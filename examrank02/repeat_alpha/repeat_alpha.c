#include <unistd.h>
#include <stdio.h>

int ft_repalpha(int  c)
{
	if ((c >= 65) && (c <=90))
		return (c - 64);
	else if ((c >= 97) && (c <=122))
		return (c - 96);
	else
		return (1);
}

int main(int argc, char **argv)
{
	int i;
	int rep;
	
	i = 0;
	rep = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			rep = ft_repalpha((int)(argv[1][i]));
			while (rep != 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}	
	}
	write(1, "\n", 1);
}
