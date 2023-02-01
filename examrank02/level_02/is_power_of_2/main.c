#include <unistd.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	number;

	number = 1;
	while (number <= n)
	{
		if (number == n)
			return (1);
		number = number * 2;
	}
	return (0);
}

int	main(void)
{
	int	result;

	result = is_power_of_2(0);
	printf("¿El numero %d es potencia de 2? %d\n", 0, result);
	result = is_power_of_2(2);
	printf("¿El numero %d es potencia de 2? %d\n", 2, result);
	result = is_power_of_2(4);
	printf("¿El numero %d es potencia de 2? %d\n", 4, result);
	result = is_power_of_2(8);
	printf("¿El numero %d es potencia de 2? %d\n", 8, result);
	result = is_power_of_2(16);
	printf("¿El numero %d es potencia de 2? %d\n", 16, result);
	result = is_power_of_2(33);
	printf("¿El numero %d es potencia de 2? %d\n", 33, result);
	result = is_power_of_2(64);
	printf("¿El numero %d es potencia de 2? %d\n", 64, result);
	result = is_power_of_2(124);
	printf("¿El numero %d es potencia de 2? %d\n", 124, result);
	result = is_power_of_2(256);
	printf("¿El numero %d es potencia de 2? %d\n", 256, result);
	result = is_power_of_2(518);
	printf("¿El numero %d es potencia de 2? %d\n", 518, result);
	result = is_power_of_2(1024);
	printf("¿El numero %d es potencia de 2? %d\n", 1024, result);
	result = is_power_of_2(2048);
	printf("¿El numero %d es potencia de 2? %d\n", 2048, result);
	result = is_power_of_2(4097);
	printf("¿El numero %d es potencia de 2? %d\n", 4097, result);
	result = is_power_of_2(9992);
	printf("¿El numero %d es potencia de 2? %d\n", 9992, result);
	result = is_power_of_2(19986);
	printf("¿El numero %d es potencia de 2? %d\n", 19986, result);
}
