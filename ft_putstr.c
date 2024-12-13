#include <unistd.h>

void    ft_putstr(const char *s)
{
   
    if (s == NULL)
        return ;
    while (*s != '\0')
	{
		write(1, s, 1);
		++s;
	}
}
