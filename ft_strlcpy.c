#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t srcsize = 0;

    if (src == NULL ||  dst == NULL)
        return (0);
    while (src[srcsize])
        srcsize++;
    if (dstsize == 0)
        return srcsize;
    while (i < srcsize && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return srcsize;
}

