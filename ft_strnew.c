#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i <= size)
	{
		*(ptr + i) = '\0';
		++i;
	}
	return (ptr);
}
