/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <bahommer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:42:11 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/06 09:39:29 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
