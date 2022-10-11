/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <bahommer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:00:36 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/06 08:30:33 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
