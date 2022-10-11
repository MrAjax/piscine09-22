/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:04:17 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/01 10:19:26 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_val(char *base);
unsigned int	ft_atoi_base(char *str, char *base);
int				ft_atoi_sign(char *str);
int				ft_strlen(char *str);

int	ft_base_len(char *str, unsigned int nb, unsigned int base)
{
	int	i;

	i = 0;
	while (nb >= base)
	{
		nb = nb / base;
		i++;
	}
	i++;
	if (ft_atoi_sign(str) < 0)
		i++;
	return (i);
}

char	*ft_display_str(char *nbr, char *str, char *base_to, unsigned int dec)
{
	unsigned int	lennb;

	lennb = ft_base_len(nbr, dec, ft_strlen(base_to));
	str[lennb] = '\0';
	if (ft_atoi_sign(nbr) < 0)
	{
		str[0] = '-';
		while (lennb > 1)
		{
			str[lennb - 1] = base_to[dec % ft_strlen(base_to)];
			dec = dec / ft_strlen(base_to);
			lennb--;
		}
	}
	else
	{
		while (lennb > 0)
		{
			str[lennb - 1] = base_to[dec % ft_strlen(base_to)];
			dec = dec / ft_strlen(base_to);
			lennb--;
		}
	}	
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	dec;
	unsigned int	lennb;
	char			*str;

	dec = 0;
	if (!nbr || !ft_val(base_from) || !ft_val(base_to))
		return (0);
	dec = ft_atoi_base(nbr, base_from);
	lennb = ft_base_len(nbr, dec, ft_strlen(base_to));
	if (dec == 0)
	{
		str = malloc(sizeof(*str) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = base_to[0];
		str[1] = '\0';
		return (str);
	}
	str = malloc(sizeof(*str) * (lennb + 1));
	if (str == NULL)
		return (NULL);
	str = ft_display_str(nbr, str, base_to, dec);
	if (str == NULL)
		return (NULL);
	return (str);
}
