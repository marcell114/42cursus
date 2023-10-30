#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (*(s + 1))
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}