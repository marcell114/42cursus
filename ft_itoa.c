#include "libft.h"

static size_t   count_digits(int n)
{
    size_t count;

    count = 1;
    while (n /= 10)
    {
        count++;
    }
    return (count);
}
char *ft_itoa(int n)
{
    char    *str_num;
    size_t  digits;
    int     num;

    num = n;
    digits = count_digits(n);
    if (n < 0)
    {
        num = -num;
    }
    if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
    {
        return (NULL);
    }
    *(str_num + digits) = 0;
    while (digits--)
    {
        *(str_num + digits) = num % 10 + '0';
        num = num / 10;
    }
    if (n < 0)
    {
        *(str_num + 0) = '-';
    }
    return (str_num);
}