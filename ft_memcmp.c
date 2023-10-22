#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	temp;
	unsigned char	temp2;

	if (n == 0)
		return (0);
	i = 0;
	temp = ((unsigned char*)s1)[i];
	temp2 = ((unsigned char*)s2)[i];
	while ((i < n) && (temp == temp2))
	{
		temp = ((unsigned char*)s1)[i];
		temp2 = ((unsigned char*)s2)[i];
		i++;
	}
	return (temp - temp2);
}