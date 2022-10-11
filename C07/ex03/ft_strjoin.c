/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:25:58 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/28 10:25:58 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_display_dest(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (k < ft_strlen(strs[i]))
			dest[j++] = strs[i][k++];
		if (i < size - 1)
		{
			k = 0;
			while (k < ft_strlen(sep))
				dest[j++] = sep[k++];
		}
		k = 0;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		if (dest == NULL)
			return (NULL);
		*dest = 0;
		return (dest);
	}
	dest = malloc(sizeof(*dest) * (ft_total_len(size, strs, sep) + 1));
	if (dest == NULL)
		return (NULL);
	return (ft_display_dest(size, strs, sep, dest));
}
