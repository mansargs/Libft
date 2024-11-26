#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t dest_len;

    i = 0;
    
    dest_len = ft_strlen(dest);
    while (src[i] && i < n)
    {
        dest[dest_len + i] = src[i];
        ++i;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
