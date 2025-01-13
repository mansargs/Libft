#include <string.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (to_find == NULL || str == NULL)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[++i])
	{
		if (str[i] == to_find[j])
			++j;
		else
			j = 0;
		if (to_find[j] == '\0')
			return (char *)(str + i - j + 1);
	}
	return (NULL);
}
