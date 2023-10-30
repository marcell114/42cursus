#include "libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char            *str;
    unsigned int    i;

    if (!s)
    {
        return (NULL);
    }
    if (!(str = malloc(ft_strlen(s) + 1)))
    {
        return (NULL);
    }
    i = 0;
    while (*(s + 1))
    {
        *(str + 1) = f(i, *(s + 1));
        i++;
    }
    *(str + i) = '\0';
    return (str);
}