int ft_isalnum(char *str)
{
    int i;

    i = -1;
    if (str == 0 || str[0] == '\0')
        return 0;
    while (str[++i])
    {
        if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') ||
            (str[i] > 'Z' && str[i] < 'a') ||  str[i] > 'z')
            return 0;
    }
    return 1;
}
/*
#include <stdio.h>

int main(void)
{
    printf("is alnum : %d\n", ft_isalnum("%vssvjnx"));
}
*/