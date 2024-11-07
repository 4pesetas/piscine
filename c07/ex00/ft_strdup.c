/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:18:41 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/05 12:28:20 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	res = (char *)malloc(sizeof(char) * len + 1);
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
/*int main()
{
	char src[] = "abcd";
	char *res = ft_strdup(src);
	printf("%s\n%s\n", src, res);
	free(res);
	return (0);
}*/