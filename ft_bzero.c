#include <stdlib.h>

void    ft_bzero(void *buffer, size_t n)
{
    if (buffer == NULL || n == 0)
        return ;
    unsigned char *ptr = (unsigned char *)buffer;
    while (n--)
        *ptr++ = '\0';
}  

