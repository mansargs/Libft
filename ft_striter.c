#include <stdlib.h>

void    ft_striter(char *s, void (*f)(char*))
{
    int i;

    if (s == NULL || f == NULL)
        return ;
    i = -1;
    while (s[++i])
    {
        f(s + i);
    }
}

