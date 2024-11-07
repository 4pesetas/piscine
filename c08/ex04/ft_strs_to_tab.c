/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:49:31 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/09 19:18:41 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		if(nb == -2147483648)
		{
			write (1, "2147483648", 1);
			return ;
		}
		nb *= - 1;
	}
	if(nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i = 0;
	while (par[i].str)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac - 1, av + 1));
	return 0;
}