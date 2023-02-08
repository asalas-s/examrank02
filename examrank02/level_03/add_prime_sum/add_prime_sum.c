int	ft_isprime(unsigned int n)
{
	unsigned int	i;

	i = 3;
	if (n < 2)
		return (0);
	if ((n % 2) == 0)
		return (0);
	while (i <= (n / 2))
	{
		if ((n % i) == 0)
			return (0);
	}
	return (1);
}
