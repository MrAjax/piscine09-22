/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:38:29 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/14 09:06:53 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 7)
	{
		b = a;
		while (b++ < 8)
		{
			c = b;
			while (c++ < 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				if (a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}	
			}
		}
	}
}
