/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:53:33 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/17 16:03:44 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase(str[i]) == 1)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			i++;
		else if (i != 0 && (str[i - 1] > 64 && str[i - 1] < 91))
			i++;
		else if (i != 0 && (str[i - 1] > 96 && str[i - 1] < 123))
			i++;
		else if (i != 0 && (str[i - 1] > 47 && str[i - 1] < 58))
			i++;
		else
		{
			str[i] = str[i] - 32;
			i++;
		}	
	}
	return (str);
}
