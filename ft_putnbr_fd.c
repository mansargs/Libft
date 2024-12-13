#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char X[10];
    int i;

    i = 0;
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    while (n / 10 != 0)
    {
        X[i++] = (n % 10) + '0';
        n /= 10;
    }
    X[i] = n + '0';
    while (i >= 0)
        write(fd, X + i--, 1);
}
