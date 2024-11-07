/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:44:34 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/08 19:19:20 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int is_valid_base(char *base)
{
    int i = 0;
    int j;
    int len = ft_strlen(base);

    if (len < 2)
        return 0;

    while (i < len)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 31 || base[i] == 127)
            return 0;
        j = i + 1;
        while (j < len)
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

void printnb(unsigned int nb, int baseval, char *syb)
{
    if (nb >= (unsigned int)baseval)
        printnb(nb / baseval, baseval, syb);
    ft_putchar(syb[nb % baseval]);
}

void ft_putnbr_base(int nbr, char *base)
{
    int baseval = ft_strlen(base);

    if (!is_valid_base(base))
        return;

    if (nbr < 0)
    {
        ft_putchar('-');
        printnb((unsigned int)(-nbr), baseval, base);
    }
    else
    {
        printnb((unsigned int)nbr, baseval, base);
    }
}



int main(int ac, char **av)
{
	ft_putnbr_base(-34, "01");        
    ft_putchar('\n');
    ft_putnbr_base(-2147483648, "0123456789"); 
    ft_putchar('\n');
    ft_putnbr_base(-2147483648, "0123456789ABCDEF");
    ft_putchar('\n');
    return 0;
}