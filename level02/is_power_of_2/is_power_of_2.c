/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:40:07 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:29:17 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/*
You multiply an auxiliary number by 2 to obtain the powers of 2, and in between,
you compare the number given by the parameter to see if it is equal to the 
different powers.
*/

int	is_power_of_2(unsigned int n)
{
	unsigned int	aux;

	aux = 1;
	while (aux <= n)
	{
		if (aux == n)
			return (1);
		aux *= 2;
	}
	return (0);
}
/*int	main()
{
	unsigned int	n = 16;

	printf("%d\n", is_power_of_2(n));
}*/
