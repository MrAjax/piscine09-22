/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:56:30 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/17 19:11:39 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_sign(char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg++;
			i++;
		}	
		else
			i++;
	}
	if (neg % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * ft_atoi_sign(str));
}
