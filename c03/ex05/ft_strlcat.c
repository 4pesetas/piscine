/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:55:12 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/11 14:58:17 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	int				lensrc;
	int				j;

	lendest = 0;
	lensrc = 0;
	j = 0;
	while (dest[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	if (size <= lendest)
		lensrc += size;
	else
		lensrc += lendest;
	while (src[j] && (lendest + 1) < size)
	{
		dest[lendest] = src[j];
		lendest++;
		j++;
	}
	dest[lendest] = '\0';
	return (lensrc);
}
int main()
{
    char dest[] = "12345";
	char src[] = "xxx";
    int size = 5;

    printf("dest: %s\nlenght = %d\n", dest, ft_strlcat(dest, src, size));

	char dest1[20] = "12345";  // Ensure there is enough space in dest1
    const char src1[] = "xxx";
    size_t size1 = 5;
    printf("real length = %zu\n", strlcat(dest1, src1, size1));
    printf("real dest after: %s\n", dest1);

    return 0;
}