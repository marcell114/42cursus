/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:42:56 by mpal              #+#    #+#             */
/*   Updated: 2023/11/15 15:44:45 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	res;
	size_t	i;

	i = size;
	res = ft_strlen(dest) + ft_strlen(src);
	while (*dest != 0 && size > 0)
	{
		dest++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + i);
	while (*src != 0 && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (res);
}
