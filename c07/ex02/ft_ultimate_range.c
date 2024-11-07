/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:57:48 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/05 16:00:05 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
	{
		*range = NULL;
		return (-1);
	}
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (len);
}
/*int main()
{
	int min = 3;
	int max = 8;
	int *range;
	int  i = 0;
	
	ft_ultimate_range(&range, min, max);
	while (i < (max - min))
	{
		printf("%d", range[i]);
		i++;
	}
	return 0;
}*/