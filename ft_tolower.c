#include "libft.h"

void ft_tolower(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				if (str[i] <= 'Z' && str[i] >= 'A')
				{
						str[i] = str[i] + 32;
				}
				write (1, &str[i], 1);
				i++;
		}
}