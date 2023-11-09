/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:22:01 by mpal              #+#    #+#             */
/*   Updated: 2023/11/02 20:10:32 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
		{
			count++;
		}
		while (*s != c && *s)
		{
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	word_len;
	int		i;

	new_array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!s || !new_array)
	{
		return (0);
	}
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
			{
				word_len = ft_strlen(s);
			}
			else
			{
				word_len = ft_strchr(s, c) - s;
			}
			new_array[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	new_array[i] = NULL;
	return (new_array);
}
