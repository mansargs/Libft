int ft_isdigit(char *str)
{
    int i;

    i = -1;
    if (str == 0 || str[0] == '\0')
        return  0;
    while (str[++i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}
/*
#include <stdio.h>

int main(void)
{
    printf("Is digit : %d ", ft_isdigit(""));
}
*/