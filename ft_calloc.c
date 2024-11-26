#include <stdlib.h>

void *ft_calloc(size_t  count, size_t size)
{
    size_t i;


    unsigned char *mem = malloc(count*size);
    if (mem  == NULL)
        return (NULL);
    i = 0;    
    while (i < count)
    {
        *(mem + i) = 0;
        ++i;
    }
    return ((void *)mem);
}
