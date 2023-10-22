#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}