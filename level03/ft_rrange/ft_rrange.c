/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:44:34 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/06 16:50:28 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len;
	int	*str;

	len = ft_abs(start - end);
	str = (int *)malloc(len + 1 * sizeof(int));
	if (!str)
		return (0);
	while (start <= end)
	{
		str[i] = end;
		end--;
		i++;
	}
	while (start >= end)
	{
		str[i] = end;
		end++;
		i++;
	}
	return (str);
}

int main()
{
	int start = 1;
	int end = -3;
	int i = 0;
	int len = ft_abs(end - start);
	int *str = ft_rrange(start, end);

	while (i <= len)
	{
		printf("[%d]", str[i]);
		i++;
	}
	printf("\n");
}
