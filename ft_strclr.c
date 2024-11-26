#include <stdlib.h>

void    ft_strclr(char *s)
{
    int i;

    i = -1;
    if (s == NULL)
        return ;
    while (s[++i])
        s[i] = '\0';
}
