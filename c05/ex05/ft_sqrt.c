/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:58:39 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/01 12:02:43 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int main()
{
	int nb = 100;
	printf("%d\n", ft_sqrt(nb));
	return 0;
}*/