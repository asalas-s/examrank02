#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%zu", ft_strcspn(argv[1], argv[2]));
	}
}
