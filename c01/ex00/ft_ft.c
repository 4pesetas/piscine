/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:05:22 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/21 10:06:00 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main()
{
	int n;
	ft_ft(&n);

	printf("Value = %d\n", n);
	return 0;
}