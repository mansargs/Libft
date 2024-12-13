#include <unistd.h>

void    ft_putstr_fd(const char *s, int fd)
{
    int i;

    i = -1;
    while (s[++i])
        write(fd, s + i, 1);
    write(fd, "\n", 1);
}