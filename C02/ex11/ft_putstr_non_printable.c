/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 07:48:21 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/11 18:54:10 by baptiste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_dec_to_hex(int c)
{
	char	*tab;
	
	tab = "0123456789abcdef";
	if (c < 0)
		c = c + 256;
	if (c >= 16)
	{
		ft_dec_to_hex(c / 16);
		ft_dec_to_hex(c % 16);
	}
	else
	{
		if (c / 16 == 0)
			ft_putchar('0');
		ft_putchar(tab[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar(92);
			ft_dec_to_hex(str[i]);
			i++;
		}
	}
}
