/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:06:54 by hunter            #+#    #+#             */
/*   Updated: 2023/02/21 13:41:20 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_range(int start, int end)
{
	int	len;
	int	*str;
	int	i;

	i = 0;
	len = ft_absolute_value(start - end);
	str = (int *)malloc(len + 1 * sizeof(int));
	if (!str)
		return (0);
	while (start <= end)
	{
		str[i] = start;
		start++;
		i++;
	}
	while (start >= end)
	{
		str[i] = start;
		start--;
		i++;
	}
	return (str);
}

int main(void)
{
	int i = 0;
	int start = 0;
	int end = -3;
	int *str = ft_range(start, end);
	int len = ft_absolute_value(end - start) + 1;

	while (i < len)
	{
		printf("[%i]", str[i]);
		i++;
	}
	printf("\n");
}
