/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:20:40 by mpal              #+#    #+#             */
/*   Updated: 2023/11/08 18:44:47 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*chr;

	chr = (char *)str;
	while (*chr != (char)c)
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
