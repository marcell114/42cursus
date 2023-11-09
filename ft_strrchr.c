/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:56:14 by mpal              #+#    #+#             */
/*   Updated: 2023/11/08 19:13:19 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*chr;
	int		len;

	len = ft_strlen(str);
	chr = (char *)str + len;
	while (chr >= str)
	{
		if (*chr == (char)c)
			return (chr);
		chr--;
	}
	return (NULL);
}
/*int main() {
    const char *str = "Hello, world!";
    int c = '!';

    char *result = ft_strrchr(str, c);
    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", c, result - str);
    } else {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}*/
