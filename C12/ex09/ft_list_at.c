/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:42:11 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/04 17:28:53 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr > 0)
		nbr--;
	else
		return (NULL);
	if (!begin_list)
		return (NULL);
	while (begin_list)
	{
		if (nbr == 0)
			return (begin_list);
		begin_list = begin_list->next;
		nbr--;
	}
	return (NULL);
}
