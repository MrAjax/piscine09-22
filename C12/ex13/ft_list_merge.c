/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:45:51 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/05 08:59:35 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
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
