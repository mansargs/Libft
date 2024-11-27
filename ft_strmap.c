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

char * ft_strmap(char const *s, char (*f)(char))
{
    size_t i;
    size_t len;
    char *res;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    len = ft_strlen(s);
    res = (char *)malloc((len + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    while (i < len)
    {
        res[i] = f(s[i]);
        ++i;
    }
    res[len] = '\0';
    return (res);
}
