#include "libft.h"

void ft_toupper(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				if (str[i] <= 'z' && str[i] >= 'a')
				{
						str[i] = str[i] - 32;
				}
				write (1, &str[i], 1);
				i++;
		}
}