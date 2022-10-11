/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:41:21 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/02 16:57:05 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tabf;

	i = 0;
	if (length <= 0)
		return (NULL);
	tabf = malloc(sizeof(*tabf) * length);
	if (tab == NULL)
		return (NULL);
	while (i < length)
	{
		tabf[i] = f(tab[i]);
		i++;
	}
	return (tabf);
}
