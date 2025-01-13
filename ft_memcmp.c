#include <stdlib.h>

int	ft_memcmp(const void *buffer1, const void *buffer2, size_t n)
{
	const unsigned char	*ptr1 = (const unsigned char *)buffer1;
	const unsigned char	*ptr2 = (const unsigned char *)buffer2;

	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
