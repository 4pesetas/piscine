void ft_puchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_puchar('-');
		if(nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return;
		}
		nb *= -1;
	}
	if(nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}