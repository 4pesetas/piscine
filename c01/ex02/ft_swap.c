/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:58:47 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/21 12:58:52 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main()
{
	int a = 3;
	int b = 7;
	
	
	printf("original values a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("changed values = a = %d, b = %d\n", a, b);
	return 0;
}