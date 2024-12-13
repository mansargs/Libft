#include <string.h>
#include <stdlib.h>

typedef struct  s_list
{
        void    *content;
        size_t  content_size;
        struct s_list   *next;
}   t_list;

void *ft_memcpy(void * dest, void const  *source, size_t n)
{
    unsigned char *dst = (unsigned char *)dest;
    unsigned char *src = (unsigned char *)source;

    if (n == 0)
        return NULL;
    while (n--)
    {
        *dst = *src;
        dst++;
        src++;
    }
    return (void *)dst;
}
