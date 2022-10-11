/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:24:20 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/28 08:24:58 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_check(int col, char *tab)
{
	int	j;

	j = col - 1;
	while (j >= 0)
	{
		if (tab[col] == tab[j])
			return (0);
		j--;
	}
	j = 1;
	while (col - j >= 0)
	{		
		if (tab[col] + j == tab[col - j] && (tab[col] + j <= '9'))
			return (0);
		else if (tab[col] - j == tab[col - j] && (tab[col] - j >= '0'))
			return (0);
		else
			j++;
	}
	return (1);
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

void	ft_recur_q(int col, char *tab, int *count)
{
	while (tab[col] < '9')
	{
		tab[col]++;
		if (ft_check(col, tab))
		{
			if (col == 9)
			{
				*count = *count + 1;
				ft_putstr(tab);
				ft_putchar('\n');
			}
			else
			{
				tab[col + 1] = '/';
				ft_recur_q(col + 1, tab, count);
			}
		}
		else
			ft_recur_q(col, tab, count);
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		count;

	count = 0;
	tab[0] = '/';
	ft_recur_q(0, tab, &count);
	return (count);
}
