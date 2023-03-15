/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:50:11 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/10 13:30:00 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include<stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	if ((begin_list == NULL) || (*begin_list == NULL))
		return ;
	current = *begin_list;
	if (((cmp)(current->data, data_ref)) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp); //With recursion, we update the content of the list
	}
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp); // With recursion, we traverse the list while applying the conditions stated
}
