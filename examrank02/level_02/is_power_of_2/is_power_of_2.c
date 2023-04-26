int	is_power_of_2(unsigned int n)
{
	if ((n % 2) != 0)
		return (0);
	while ((n / 2) != 0)
	{
		n = (n / 2);
	}
	if (n)
		return (0);
	else
		return (1);
}
