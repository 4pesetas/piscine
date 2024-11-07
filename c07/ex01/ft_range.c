/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:22:30 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/05 12:29:53 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	len;
	int	i;

	res = 0;
	len = 0;
	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*int main()
{
	int i = 0;
    int min = 1;
    int max = 6;
    int *res = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", res[i]);
		i++;
	}
    return 0;
}*/