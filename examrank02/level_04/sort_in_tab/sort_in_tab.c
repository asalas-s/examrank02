#include <stdio.h>

int	ft_ascending(int a, int b)
{
	return (a <= b);
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_ascending(tab[i], tab[i + 1]) == 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
