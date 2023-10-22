#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int cpy;

	i = ft_strlen(dest);
	j = 0;
	cpy = ft_strlen(src) + (size <= i ? size : i);
	if (size == 0)
		return (cpy);
	while (src[j] != '\0' && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (cpy);
}