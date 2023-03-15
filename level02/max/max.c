/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:45:21 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:29:50 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

/*int main()
{
	int tab[] = {1, 4 , 8 , 0, 32};

	printf("%d\n", max(tab, 5));
}*/
