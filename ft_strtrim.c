#include <stdlib.h>

size_t	count_len_without_space(const char *str)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			++len;
		++i;
	}
	return (len);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strtrim(const char *s)
{
	char	*res;
	size_t	res_len;
	size_t	len;
	size_t	i;
	int		j;

	if (s == NULL)
		return (NULL);
	res_len = count_len_without_space(s);
	res = (char *)malloc((res_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = -1;
	len = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		++i;
	if (i == len)
		goto only_space_or_empty;
	while (s[--len] && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
		;
only_space_or_empty:
	while (i <= len)
	{
		res[++j] = s[i];
		++i;
	}
	return (res);
}
