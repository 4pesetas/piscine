#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j = 0;
	int t;

	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}
int main()
{
	int tab[] = {1, 3, 6, 2, 4, 5};
	int size = 6;
	ft_sort_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;
}