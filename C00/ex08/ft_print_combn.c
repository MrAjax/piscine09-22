/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:54:21 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/04 08:19:41 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_check(char *tab, int x)
{
	while (x > 0)
	{
		if (tab[x] <= tab[x - 1])
			return (0);
		x--;
	}		
	return (1);
}

void	ft_recur_p(char *tab, int x, int n)
{
	while (tab[x] < '9')
	{
		tab[x]++;
		if (ft_check(tab, x))
		{
			if (x == n - 1)
			{
				ft_putstr(tab);
				if (tab[0] != ('9' - n + 1))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}	
			}
			else
			{
				tab[x + 1] = '/';
				ft_recur_p(tab, x + 1, n);
			}
		}
		else
			ft_recur_p(tab, x, n);
	}
}

void	ft_print_combn(int n)
{
	char	tab[9];

	tab[n] = '\0';
	tab[0] = '/';
	ft_recur_p(tab, 0, n);
}
