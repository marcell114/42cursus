#include "libft.h"

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strrchr(const char *str, int c)
{
    char *chr;
    int len;

     len = ft_strlen(str);
    chr = (char *)str + len;
    while (chr >= str && *chr != c)
    {
        chr--;
    }
    if (*chr == c)
    {
        return (chr);
    }
    else
    {
        return (NULL);
    }
    
}
int main() {
    const char *str = "Hello, world!";
    int c = '!';

    char *result = ft_strrchr(str, c);
    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", c, result - str);
    } else {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}