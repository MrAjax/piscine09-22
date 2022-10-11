/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuseyno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:21:46 by khuseyno          #+#    #+#             */
/*   Updated: 2022/07/10 09:35:13 by khuseyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_firstline(char *a, int x, int y)
{
	int	col;

	col = -1;
	while (col++ < x - 1 && y > 0)
	{
		if (col == 0 && x != 1)
		{
			ft_putchar(a[0]);
		}
		else if (col == x - 1)
		{
			ft_putchar(a[0]);
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
				ft_putchar(a[2]);
			}
			else if (col == x - 1)
			{
				ft_putchar(a[2]);
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
		if (col == 0 && x != 1 && y > 1)
		{
			ft_putchar(a[0]);
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

	ptr = "o-| \n";
	ft_print_firstline(ptr, x, y);
	ft_print_restlines(ptr, x, y);
	ft_print_lastline(ptr, x, y);
}
