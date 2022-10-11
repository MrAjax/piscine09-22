/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:24:51 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/14 10:46:03 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
	}	
	else
		i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + 48);
}
