/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:51:32 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/21 15:51:35 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[j];
				tab[j] = tab[i];
				tab[i] = t;
			}
			j++;
		}
		i++;
	}
}
int	main(void)
{
	int tab[] = {42, 3, 21, 7, 0, 66};
	int size = 6;
	int i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return 0;
}