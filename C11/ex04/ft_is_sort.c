/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:50:31 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/02 19:32:12 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			up++;
		else if (f(tab[i], tab[i + 1]) > 0)
			down++;
		i++;
	}
	if (down != 0 && up != 0)
		return (0);
	else
		return (1);
}
