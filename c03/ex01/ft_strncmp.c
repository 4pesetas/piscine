/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:31:58 by iumorave          #+#    #+#             */
/*   Updated: 2024/09/11 18:49:24 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0 || n == i)
		return (0);
	
	return (s1[i] - s2[i]);
}
/*int main()
{
	char s1[] = "abc";
	char s2[] = "ab000A";
	int i = 3;
	printf("%d\n", ft_strncmp(s1, s2, i));
	return 0;
}*/