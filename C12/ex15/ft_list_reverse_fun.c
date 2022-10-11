/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <bahommer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:25:05 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/06 09:01:07 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list)
	{
		if (nbr == 0)
			return (begin_list);
		begin_list = begin_list->next;
		nbr--;
	}
	return (NULL);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*end;
	t_list			*current;
	void			*temp;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_list_size(begin_list);
	current = begin_list;
	while (i < len / 2)
	{
		end = ft_list_at(begin_list, len - i - 1);
		temp = current->data;
		current->data = end->data;
		end->data = temp;
		current = current->next;
		i++;
	}
}
