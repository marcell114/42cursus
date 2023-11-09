/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:24:49 by mpal              #+#    #+#             */
/*   Updated: 2023/11/02 19:33:02 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		*temp++ = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main(void)
// {
//     char str[50] = "Hello, world!";
//     printf("Before: %s\n", str);
//     ft_memset(str, 'A', 2);
//     printf("After: %s\n", str);
//     return 0;
// }
