/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:38:28 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/26 16:51:16 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	long	lmin;
	long	lmax;

	lmin = min;
	lmax = max;
	i = 0;
	if (lmin >= lmax)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(range) * (lmax - lmin));
	if (range == NULL)
		return (-1);
	while (i < (lmax - lmin))
	{	
		(*range)[i] = min;
		min++;
		i++;
	}
	return (lmax - lmin);
}
