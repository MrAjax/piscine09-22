/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:36:30 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/03 11:53:24 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_display_res(int ac, char **av, int (*f)(int, int))
{
	if (ac == 4)
	{
		if (ft_strlen(av[2]) != 1)
			ft_putstr("0\n");
		else if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
			ft_putstr("Stop : division by zero\n");
		else if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
			ft_putstr("Stop : modulo by zero\n");
		else if (av[2][0] == '+' || av[2][0] == '-' || av[2][0] == '/'
			|| av[2][0] == '*' || av[2][0] == '%')
		{
			ft_putnbr(f(ft_atoi(av[1]), ft_atoi(av[3])));
			ft_putstr("\n");
		}
		else
			ft_putstr("0\n");
	}
	else
		ft_putstr("");
}

int	main(int ac, char **av)
{
	int	(*op[5])(int, int);

	op[0] = &ft_add;
	op[1] = &ft_sub;
	op[2] = &ft_div;
	op[3] = &ft_mult;
	op[4] = &ft_mod;
	if (av[2][0] == '+')
		ft_display_res(ac, av, op[0]);
	else if (av[2][0] == '-')
		ft_display_res(ac, av, op[1]);
	else if (av[2][0] == '/')
		ft_display_res(ac, av, op[2]);
	else if (av[2][0] == '*')
		ft_display_res(ac, av, op[3]);
	else if (av[2][0] == '%')
		ft_display_res(ac, av, op[4]);
	else
		ft_display_res(ac, av, op[0]);
	return (0);
}
