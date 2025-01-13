#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (unsigned char *)dest;
	i = 0;
	if (d == s || n == 0)
		return (dest);
	if ((s < d && (s + n) > d) || (d < s && (d + n) > s))
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
	{
		while (n--)
		{
			*(d + i) = *(s + i);
			++i;
		}
	}
	return (dest);
}
