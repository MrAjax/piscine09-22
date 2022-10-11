/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:03:44 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/03 11:15:12 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int nb, int nb2)
{
	int	res;

	res = 0;
	res = nb + nb2;
	return (res);
}

int	ft_sub(int nb, int nb2)
{
	int	res;

	res = 0;
	res = nb - nb2;
	return (res);
}

int	ft_div(int nb, int nb2)
{
	int	res;

	res = 0;
	res = nb / nb2;
	return (res);
}

int	ft_mult(int nb, int nb2)
{
	int	res;

	res = 0;
	res = nb * nb2;
	return (res);
}

int	ft_mod(int nb, int nb2)
{
	int	res;

	res = 0;
	res = nb % nb2;
	return (res);
}
