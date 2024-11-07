/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:49:50 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/28 11:45:47 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr (nb / 10);
	ft_putchar (nb % 10 + '0');
}
/*int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	
	ft_putnbr(0);
	write(1, "\n", 1);
	
	return (0);
}*/