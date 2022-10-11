/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhommeri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:50:27 by bhommeri          #+#    #+#             */
/*   Updated: 2022/07/10 09:36:11 by khuseyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_firstline(char *a, int x, int y)
{
	int	col;

	col = -1;
	while (col++ < x - 1 && y > 0)
	{
		if (col == 0 && x == 1)
		{
			ft_putchar(a[0]);
			ft_putchar(a[4]);
		}
		else if (col == 0)
		{
			ft_putchar(a[0]);
		}
		else if (col == x - 1)
		{
			ft_putchar(a[2]);
			ft_putchar(a[4]);
		}
		else if (col > 0 && col < x - 1)
		{
			ft_putchar(a[1]);
		}
	}
}

void	ft_print_restlines(char *a, int x, int y)
{
	int	row;
	int	col;

	row = -1;
	while (row++ < y - 3)
	{
		col = -1;
		while (col++ < x - 1)
		{
			if (col != 0 && col != x - 1)
			{
				ft_putchar(a[3]);
			}
			else if (col == 0 && x != 1)
			{
				ft_putchar(a[1]);
			}
			else if (col == x - 1)
			{
				ft_putchar(a[1]);
				ft_putchar(a[4]);
			}
		}	
	}
}

void	ft_print_lastline(char *a, int x, int y)
{
	int	col;

	col = -1;
	while (col++ < x - 1)
	{	
		if (col == 0 && y > 1)
		{	
			ft_putchar(a[2]);
			if (x == 1)
			{
				ft_putchar(a[4]);
			}
		}
		else if (col == x - 1 && y > 1)
		{
			ft_putchar(a[0]);
			ft_putchar(a[4]);
		}
		else if (col > 0 && col < x - 1 && y > 1)
		{
			ft_putchar(a[1]);
		}
	}
}	

void	rush(int x, int y)
{
	char	*ptr;

	ptr = "/*\\ \n";
	ft_print_firstline(ptr, x, y);
	ft_print_restlines(ptr, x, y);
	ft_print_lastline(ptr, x, y);
}
