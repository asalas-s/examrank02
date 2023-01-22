#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int z;

	i = 0;
	j = 0;
	z = 0;
	if (argc == 3)
	{
		while ((argv[1][i]) != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					break;
				}	
				else
					j++;		
			}
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
}
