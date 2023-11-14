/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:45:21 by mpal              #+#    #+#             */
/*   Updated: 2023/11/14 14:56:10 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	cpy;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
		cpy = ft_strlen(src) + size;
	else
		cpy = ft_strlen(src) + i;
	if (size == 0)
		return (cpy);
	while (src[j] != '\0' && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (cpy);
}
