#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char* temp = s;
    
    i = 0;
    while (i < n)
    {
        *temp++ = (unsigned char)c;
        i++;
    }
    return (s);
}
// int main(void)
// {
//     char str[50] = "Hello, world!";
//     printf("Before: %s\n", str);
//     ft_memset(str, 'A', 2);
//     printf("After: %s\n", str);
//     return 0;
// }