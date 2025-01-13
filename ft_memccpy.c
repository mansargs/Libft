void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src = (const unsigned char *)source;
	unsigned char		ch;

	dst = (unsigned char *)dest;
	ch = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		*dst = *src;
		if (*src == ch)
			return ((void *)(dst + 1));
		dst++;
		src++;
	}
	return (NULL);
}
