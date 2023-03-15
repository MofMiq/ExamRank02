/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:29:41 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:19:04 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/*int	main(void)
{
	unsigned char	octet;

	octet = 97;
	printf("original value:%d\n", octet);
	print_bits(octet);
}*/
