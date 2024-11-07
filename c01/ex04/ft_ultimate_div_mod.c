/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:40:22 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/21 17:30:17 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int main()
{
	int a = 9;
	int b = 2;
	
	
	printf("original a = %d b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Division stored in a = %d\n Modulo stored in b = %d\n", a, b);
	return 0;
}
