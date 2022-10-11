/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:12:05 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/21 12:48:49 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_dec_to_base(unsigned int nbr, char *base, int len)
{
	if (nbr >= (unsigned int)len)
	{
		ft_dec_to_base(nbr / len, base, len);
		ft_putchar(base[nbr % len]);
	}	
	else
		ft_putchar(base[nbr % len]);
}

int	ft_base_valid(char *base, int i, int j)
{
	if (ft_strlen(base) < 2)
		return (0);
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
	}
	i = 0;
	while (base[i])
	{
		if ((base[i] != base[j] && base[j] != '\0') || i == j)
			j++;
		else if (base[i] == base[j] && i != j)
			return (0);
		else if (base[j] == '\0')
		{	
			i++;
			j = 0;
		}	
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	x;

	x = 0;
	if (ft_base_valid(base, -1, 1) == 1)
	{	
		if (nbr < 0)
		{
			x = -nbr;
			ft_putchar('-');
		}
		else
			x = nbr;
		ft_dec_to_base(x, base, ft_strlen(base));
	}	
}
