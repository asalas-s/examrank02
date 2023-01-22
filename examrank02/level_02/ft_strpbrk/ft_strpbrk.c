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
				alert == 1;
			j++;
		}
		if (alert == 0)
		{
			j = 0;
			i++;
		}
	}
	return (&s1[i]);
}
