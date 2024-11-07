#include <stdio.h>

int	ft_alfnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_alf(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	int i = 0;
	while (str[i])
	{
		if (i == 0 && ft_alf(str[i]) == 1)
			str[i] -= 32;
		if (ft_alfnum(str[i]) == 0 && ft_alf(str[i + 1]) == 1)
			str[i + 1] -= 32;
		i++; 
	}
	return str;
}