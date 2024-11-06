int ft_isalpha(char *str)
{
    int i = -1;

    if(str == 0 || str[0] == 0)
        return 0;
    while (str[++i])
    {
        if (str[i] < 65 || (str[i] > 90 &&  str[i] < 97) || str[i] > 122)
        {
            return 0;
        }
    }
    return 1;
}

/*
#include <stdio.h>

int main(void)
{
    printf("is alpha: %d\n", ft_isalpha("Helloodsf4rd"));
}
*/