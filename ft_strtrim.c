#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *new_string;

    if (!s1 || !set)
    {
        return (NULL);
    }
    start = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[start]) && start <= end)
    {
        start++;
    }
    if (start > end)
    {
        return (ft_strdup(s1 + end + 1));
    }
    while (ft_strchr(set, s1[end]) && end >= 0)
    {
        end--;
    }
    new_string = malloc(end - start + 2);
    if ( !new_string)
    {
        return (NULL);
    }
    ft_strlcpy(new_string, &s1[start], end - start + 2);
    return (new_string);
}