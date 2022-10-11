/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <bahommer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:32:31 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/06 09:09:19 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front2(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (*begin_list)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
		*begin_list = ft_create_elem(data);
}

void	ft_list_sort2(t_list **begin_list, int (*cmp)())
{
	t_list	*next;
	t_list	*current;
	void	*temp;

	if (!*begin_list)
		return ;
	current = *begin_list;
	next = current->next;
	while (current->next)
	{
		if ((cmp(current->data, next->data)) > 0)
		{
			temp = current->data;
			current->data = next->data;
			next->data = temp;
			current = *begin_list;
			next = current->next;
		}
		else
		{
			current = current->next;
			next = current->next;
		}	
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front2(begin_list, data);
	ft_list_sort2(begin_list, cmp);
}
