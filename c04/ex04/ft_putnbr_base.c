/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiner <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:47:04 by rabiner           #+#    #+#             */
/*   Updated: 2024/09/08 19:47:21 by rabiner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_blenght(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (j);
}

void	ft_putnbr_base_unsigned(unsigned int nbr, char *base, int blenght)
{
	if (nbr > blenght - 1)
	{
		ft_putnbr_base_unsigned(nbr / blenght, base, blenght);
		ft_putnbr_base_unsigned(nbr % blenght, base, blenght);
	}
	if (nbr < blenght)
		ft_putchar(nbr = base[nbr]);
}


void	ft_putnbr_base(int nbr, char *base)
{
	int	blenght;

	blenght = ft_blenght(base);
	if (blenght < 2)
		return;
	if (nbr == -2147483648)
	{
		write (1, "-", 1);
		ft_putnbr_base_unsigned((unsigned int) 2147483648, base, blenght);
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > blenght - 1)
	{
		ft_putnbr_base(nbr / blenght, base);
		ft_putnbr_base(nbr % blenght, base);
	}
	if (nbr < blenght)
		ft_putchar(nbr = base[nbr]);
}

int	main(void)
{
	int	nbr = -2147483648;
	char base[] = "0123456789";

	ft_putnbr_base(nbr, base);
	return 0;
}

