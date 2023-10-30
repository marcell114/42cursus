#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    (n < 0 ? ft_putchar_fd('-', fd) : 1);
    if (n > 0)
    {
        n = -n;
    }
    (n <= -10 ? ft_putnbr_fd(-(n / 10), fd) : 1);
    ft_putchar_fd('0' - n % 10, fd);
}