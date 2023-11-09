/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:21:49 by mpal              #+#    #+#             */
/*   Updated: 2023/11/08 19:39:01 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_string;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (len > size - start)
		len = size - start;
	if (size < start)
	{
		sub_string = malloc(sizeof(char) * 1);
		if (!sub_string)
			return (NULL);
		*sub_string = '\0';
		return (sub_string);
	}
	sub_string = malloc(len * sizeof(*s) + 1);
	if (!sub_string)
		return (NULL);
	ft_strlcpy(sub_string, s + start, len + 1);
	return (sub_string);
}
