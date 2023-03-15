/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:44:25 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/22 11:46:25 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	if (argc == 2)
	{
		i = 2;
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		while (i <= nb)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break ;
				printf("*");
				nb /= i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}
