/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:06:18 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:49 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*temp;

	new = ft_create_elem(data);
	if (begin_list)
	{
		temp = *begin_list;
		while (temp->next)
			temp = temp->next;
	}
	else
		*begin_list = new;
	temp->next = new;
}
