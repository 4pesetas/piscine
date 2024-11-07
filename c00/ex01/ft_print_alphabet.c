/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:57:04 by iumorave          #+#    #+#             */
/*   Updated: 2024/08/20 11:45:52 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
