/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:26:45 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/21 14:27:12 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;
	int j;

	i = 0;
	j = 0;
	while(tab[j])
		j++;
	j--;
	while (i < j)
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
