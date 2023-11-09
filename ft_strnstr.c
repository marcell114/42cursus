/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:59:38 by mpal              #+#    #+#             */
/*   Updated: 2023/11/03 20:03:03 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s2);
	if (j == 0)
		return (((char *)s));
	while (s[i] && i < n)
	{
		if (!ft_strncmp(&s[i], s2, j)
			&& ((n - i) >= j))
			return (&((char *)s)[i]);
		else
			i++;
	}
	return (NULL);
}
