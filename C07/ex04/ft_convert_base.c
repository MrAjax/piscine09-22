/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:09:56 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/01 10:10:01 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_val(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

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

int	ft_compare_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	ft_atoi_base(char *str, char *base)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_compare_base(str[i], base) != -1)
	{
		nb = nb * ft_strlen(base) + ft_compare_base(str[i], base);
		i++;
	}
	return (nb);
}
