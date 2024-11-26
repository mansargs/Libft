#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    int i;

    if (str == NULL)
        return (0);
    i = 0;
    while (str[i])
        ++i;
    return (i);
}

char *ft_strdup(const char *str)
{
    size_t len;
    size_t i;
    char *dest;

    i = 0;
    len = ft_strlen(str);
    dest = (char *)malloc(len + 1);
    if (dest == NULL)
        return (NULL);
    while (str[i])
    {
        dest[i] = str[i];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}
