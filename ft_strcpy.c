#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest);
}
