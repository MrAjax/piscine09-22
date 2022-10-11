/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:48:10 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/24 19:00:52 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_iterative_power(long nb, int power)
{
	long	i;


	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 1)
		nb = nb * i;
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (ft_iterative_power((long)i, 2) < nb)
		i++;
	if (ft_iterative_power((long)i, 2) == nb)
		return (i);
	else
		return (0);
}
