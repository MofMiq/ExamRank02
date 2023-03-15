/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:26:38 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/24 16:35:40 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	nb1;
	int	nb2;
	int	aux;

	i = 1;
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	if (nb1 <= 0 || nb2 <= 0)
		return (0);
	if (argc == 3)
	{
		while (i <= nb1 || i <= nb2)
		{
			if (nb1 % i == 0 && nb2 % i == 0)
				aux = i;
			i++;
		}
		printf("%d", aux);
	}
	printf("\n");
}
