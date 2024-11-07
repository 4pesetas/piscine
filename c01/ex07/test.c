#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int j = size - 1;

	i = 0;
	
	while (i < j - 1)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}
int main()
{
	int tab[] ={1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	ft_rev_int_tab(tab, size);

	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}