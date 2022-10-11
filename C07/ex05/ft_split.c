/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahommer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:19 by bahommer          #+#    #+#             */
/*   Updated: 2022/09/27 10:26:07 by bahommer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_char(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	dest = malloc(sizeof(*dest) * n);
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_split_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_is_char(str[i], charset)
			&& (i == 0 || ft_is_char(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_display_tab(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (ft_is_char(str[i], charset) || (i != 0
				&& !ft_is_char(str[i], charset)
				&& !ft_is_char(str[i - 1], charset)))
			i++;
		else
		{
			while (ft_is_char(str[i + j], charset) == 0 && str[i + j] != '\0')
				j++;
			tab[k] = ft_strncpy(tab[k], &str[i], j + 1);
			j = 0;
			i++;
			k++;
		}					
	}
	tab[k] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char			**tab;
	int				wc;

	wc = ft_split_count(str, charset);
	tab = malloc(sizeof(*tab) * (wc + 1));
	if (tab == NULL)
		return (NULL);
	return (ft_display_tab(tab, str, charset));
}
