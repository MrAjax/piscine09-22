/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:09:46 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/18 19:36:15 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] != to_find[j] && j == 0)
			i++;
		else if (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		else if (to_find[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (&str[i]);
	}
	return (0);
}
