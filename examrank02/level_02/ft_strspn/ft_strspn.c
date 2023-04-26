#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	alarm;

	i = 0;
	j = 0;
	alarm = 0;
	while ((s[i] != '\0') && (alarm == 0))
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				alarm = 1;
			else
				j++;
		}
		if (alarm == 1)
		{
			j = 0;
			alarm = 0;
			i++;
		}
	}
	return (i);
}
