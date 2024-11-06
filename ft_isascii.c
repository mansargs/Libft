int ft_isascii(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if ((unsigned char)str[i] > 127)
            return 0;
    }
    return 1;
}
/*
#include <stdio.h>

int main(void)
{
    printf("isascii : %d\n", ft_isascii("sifsu,syhd€ $5dw8"));
    return (0);
}
*/