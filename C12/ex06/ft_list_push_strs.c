/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:16 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/04 15:37:44 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*elem;
	t_list	*begin;

	i = 0;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		elem->next = begin;
		begin = elem;
		i++;
	}
	return (elem);
}
