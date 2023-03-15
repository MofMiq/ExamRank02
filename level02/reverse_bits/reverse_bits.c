/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:55:21 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:19:17 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i--)
	{
		res = (res * 2) + (octet % 2);
		octet /= 2;
	}
	return (res);
}

/*int main()
{
	unsigned char octet = 38;

	printf("original value:%d\n", octet);
	printf("original value:%d\n", reverse_bits(octet));
}*/