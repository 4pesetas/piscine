/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:51:18 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/26 15:09:39 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_alf(str[i]) == 1)
			str[i] -= 32;
		if (ft_alfnum(str[i]) == 0 && ft_alf(str[i + 1]) == 1)
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+++et+un" ;
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}*/
