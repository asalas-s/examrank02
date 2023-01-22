#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	alert;

	i = 0;
	j = 0;
	alert = 0;
	while ((s1[i] != '\0') && (alert == 0))
	{	
		while ((s2[j] != '\0') && (alert == 0))
		{
			if (s1[i] == s2[j])
				alert = 1;
			j++;
		}
		if (alert == 0)
		{
			j = 0;
			i++;
		}
	}
	return ((char *)&s1[i]);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 3)
	{
		str = ft_strpbrk(argv[1], argv[2]);
		printf("%s\n", str);
	}
}
