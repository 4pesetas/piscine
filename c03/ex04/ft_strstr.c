/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:59:52 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/28 13:08:33 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			k = i;
			while (str[k] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				k++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
int main()
{
    char str[] = "abca123";
    char to_find[] = "ca";

    printf("Substring found: %s\n", ft_strstr(str, to_find));
    return 0;
}