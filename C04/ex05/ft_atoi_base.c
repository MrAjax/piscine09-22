/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:23:10 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/19 16:23:22 by bahommer         ###   ########.fr       */
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

int	ft_base_valid(char *base, int i, int j)
{
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i++])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 31
			|| (base[i] > 8 && base[i] < 14))
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (ft_base_valid(base, 0, 1) == 0)
		return (0);
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_compare_base(str[i], base) != -1)
	{
		nb = nb * ft_strlen(base) + ft_compare_base(str[i], base);
		i++;
	}
	return (nb * ft_atoi_sign(str));
}
