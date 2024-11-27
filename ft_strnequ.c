#include <string.h>

int ft_strnequ(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (s1 == NULL || s2 == NULL)
        return (0);
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
        ++i;
    if (i == n || s1[i] == s2[i])
        return (1);
    return (0);
}
