#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub_string = malloc(sizeof(char) * len);
    size_t i;

    if (ft_strlen(s) < start)
    {
        char *empty_string = malloc(sizeof(char) * 1);
        empty_string[0] = '\0';
        return (empty_string);
    }
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        sub_string[i] = s[start + i];
        i++;
    }
    sub_string[i] = '\0';
    return (sub_string);
}