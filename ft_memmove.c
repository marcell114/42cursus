#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dests;
	unsigned char	*srcs;

	i = 0;
	dests = (unsigned char*)dest;
	srcs = (unsigned char*)src;
	if (src < dest)
	{
		n--;
		while ((int)n >= 0)
		{
			dests[n] = srcs[n];
			n--;
		}
	}
	else
		while (i < n)
		{
			dests[i] = srcs[i];
			i++;
		}
	return (dest);
}