/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:40 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 11:29:43 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;

	tmp = lst; // we put a pointer at the beginning of the list
	while (lst->next != NULL)
	{
		if (((*cmp)(tmp->data, tmp->next->data)) == 0)
		{
			ft_swap(&tmp->data, &tmp->next->data);
			lst =	tmp; // this way, we return to the beginning of the list
		}
		else
			lst = lst->next;
	}
	lst = tmp; // as before, we return to the beginning of the list to return the entire list
	return (lst);
}
