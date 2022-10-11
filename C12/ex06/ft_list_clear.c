/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <bahommer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:03:45 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/05 19:46:37 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
	if (!begin_list)
		return ;
	ft_list_clear(begin_list->next, free_fct);
	free_fct(begin_list->data);
	free(begin_list);
}
