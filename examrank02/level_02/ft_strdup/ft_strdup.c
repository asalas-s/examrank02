#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i <= len)
	{
		dst[i] == src[i];
		i++;
	}
	return (dst);
}
