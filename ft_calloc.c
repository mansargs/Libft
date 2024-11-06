#include <stdlib.h>

void *ft_calloc(size_t  count, size_t size)
{
    size_t i;

    void *mem = malloc(count*size);
    if (mem  == NULL)
        return (NULL);
    i = -1;    
    while (++i < count)
    {
        *(mem + i) = 0;
    }
    return (mem);
}