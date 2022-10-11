/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:18:08 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/26 13:15:28 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	lmin;
	long	lmax;
	long	i;

	lmin = min;
	lmax = max;
	i = 0;
	if (lmin >= lmax)
		return (NULL);
	tab = malloc(sizeof(*tab) * (lmax - lmin));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
