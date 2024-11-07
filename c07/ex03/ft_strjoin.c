/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:33:54 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/12 10:47:11 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

void	ft_concat_all(int size, char **strs, char *sep, char *res)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	if (size == 0)
	{
		res = malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);
	res = malloc(sizeof(char) * (total_len + 1));
	if (!res)
		return (NULL);
	*res = '\0';
	ft_concat_all(size, strs, sep, res);
	return (res);
}
/*int main()
{
    char *strs[] = {"aaa", "12345", "x   x", "", "zz"};
    char *sep = "|";
    int size = 5;
    char *res = ft_strjoin(size, strs, sep);
	
    printf("%s\n", res);
    free(res);
    return 0;
}*/