/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:04:28 by bahommer          #+#    #+#             */
/*   Updated: 2022/10/02 11:42:19 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ischar(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_wc(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((i == 0 && !ft_ischar(str[i], charset))
			|| (ft_ischar(str[i - 1], charset)
				&& !ft_ischar(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int j)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(*dest) * (j + 1));
	while (i < j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_display_tab(char **tab, char *str, char *charset)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	while (str[++i])
	{
		if (ft_ischar(str[i], charset) || (i != 0 && !ft_ischar(str[i], charset)
				&& !ft_ischar(str[i - 1], charset)))
			j = 0;
		else
		{
			while (!ft_ischar(str[i + j], charset) && str[i + j] != '\0')
				j++;
			tab[k] = ft_strncpy(tab[k], &str[i], j);
			if (tab[k] == NULL)
				return (NULL);
			k++;
		}
	}
	tab[k] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(*tab) * (ft_wc(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_display_tab(tab, str, charset);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
