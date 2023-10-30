#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_string = malloc(sizeof(char) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
    size_t i;
    size_t j;

    i = 0;
    while (s1[i] != '\0')
    {
        new_string[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new_string[i] = s2[j];
        i++;
        j++;
    }
    new_string[i] = '\0';
    return (new_string);
}