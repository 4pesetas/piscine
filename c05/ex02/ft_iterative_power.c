/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:13:35 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/06 11:50:15 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
	}
	return (nb);
}
int main()
{
	int nb = 3;
	int pow = 2;
	printf("%d\n", ft_iterative_power(nb, pow));
	return 0;
}