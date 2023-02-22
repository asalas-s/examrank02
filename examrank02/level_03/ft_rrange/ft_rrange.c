#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	len;
	int	*range;
	int	value;
	int	i;
	int	step;

	i = 0;
	value = end;
	if (end >= start)
	{
		len = end - start + 1;
		step = -1;
	}
	else
	{
		len = start - end + 1;
		step = 1;
	}
	range = (int *)malloc((len) * sizeof(int *));
	while (value != start + step)
	{
		range[i] = value;
		value = value + step;
		i++;
	}
	return (range);
}

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	*range;
	int	i;
	int	len;

	i = 0;
	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		range = ft_rrange(start, end);
		if (end >= start)
			len = end - start + 1;
		else
			len = start - end + 1;
		while (i < len)
		{
			printf("%d\n", range[i]);
			i++;
		}
	}
}
