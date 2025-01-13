#include <unistd.h>

void	ft_putendl(const char *s)
{
	if (s == NULL)
	{
		write(1, "\n", 1);
		return ;
	}
	while (*s)
	{
		write(1, s, 1);
		++s;
	}
	write(1, "\n", 1);
}
