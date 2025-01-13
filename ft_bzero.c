#include <stdlib.h>

void	ft_bzero(void *buffer, size_t n)
{
	unsigned char	*ptr;

	if (buffer == NULL || n == 0)
		return ;
	ptr = (unsigned char *)buffer;
	while (n--)
		*ptr++ = '\0';
}
