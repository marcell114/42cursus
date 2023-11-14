/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:22:01 by mpal              #+#    #+#             */
/*   Updated: 2023/11/14 12:22:34 by mpal             ###   ########.fr       */
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

static size_t	word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**new_array;
	size_t	word_len;
	int		i;

	new_array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!s || !new_array)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = word_length(s, c);
			new_array[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	new_array[i] = NULL;
	return (new_array);
}
