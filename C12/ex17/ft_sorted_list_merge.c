/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:45:24 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/06 09:17:57 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge2(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	current = *begin_list1;
	while (current->next)
		current = current->next;
	current->next = begin_list2;
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
int (*cmp)())
{
	ft_list_merge2(begin_list1, begin_list2);
	ft_list_sort2(begin_list1, cmp);
}
