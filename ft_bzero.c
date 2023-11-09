/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:42:00 by mpal              #+#    #+#             */
/*   Updated: 2023/11/02 19:50:30 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = 0;
	}
}
// int main(void)
// {
//     char str[50] = "Hello, world!";
//     printf("Before: %s\n", str);
//     ft_bzero(str, 1);
//     printf("After: %s\n", str);
//     return 0;
// }
