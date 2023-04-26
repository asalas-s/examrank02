#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_gcd(int x, int y)
{
	int	i;
	int	gcd;

	i = 1;
	while ((i <= x) && (i <= y))
	{
		if (((x % i) == 0) && ((y % i) == 0))
			gcd = i;
		i++;
	}
	return (gcd);
}

int	ft_gcd_r(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (ft_gcd_r(b, a % b));
}

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	gcd;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		gcd = ft_gcd_r(num1, num2);
		printf ("%d", gcd);
	}
	printf("\n");
}