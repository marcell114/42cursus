/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:29:06 by mpal              #+#    #+#             */
/*   Updated: 2023/10/16 16:29:11 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *chr;

	chr = (char *)str;
	while (*chr != c)
	{
			if (! *chr)
			{
					return (NULL);
			}
			chr++;
	}
	return (chr);
}

// int main() {
//     const char *str = "Hello, world!";
//     int c = 'o';

//     char *result = ft_strchr(str, c);
//     if (result != NULL) {
//         printf("Found '%c' at position: %ld\n", c, result - str);
//     } else {
//         printf("Character '%c' not found\n", c);
//     }

//     return 0;
// }