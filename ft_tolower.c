char *ft_tolower(char *str)
{
    int i;

    i = -1;
    if (str == 0 || str[0] == '\0')
        return str;
    while (str[++i])
    {
        if  (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}


/*
#include <stdio.h>
#include <string.h>

char *ft_tolower(char *str);

void test_ft_tolower() {
    // Test case 1: Տող միայն մեծատառերով
    char str1[] = "HELLO WORLD";
    char expected1[] = "hello world";
    ft_tolower(str1);
    printf("Test 1 %s\n", strcmp(str1, expected1) == 0 ? "անցավ" : "ձախողվեց");

    // Test case 2: Տող մեծատառերով, փոքրատառերով և սիմվոլներով
    char str2[] = "HeLLo, WoRLD!";
    char expected2[] = "hello, world!";
    ft_tolower(str2);
    printf("Test 2 %s\n", strcmp(str2, expected2) == 0 ? "անցավ" : "ձախողվեց");

    // Test case 3: Թվանշաններ և հատուկ սիմվոլներ, որոնք չպետք է փոփոխվեն
    char str3[] = "123!@# ABC def";
    char expected3[] = "123!@# abc def";
    ft_tolower(str3);
    printf("Test 3 %s\n", strcmp(str3, expected3) == 0 ? "անցավ" : "ձախողվեց");

    // Test case 4: Դատարկ տող
    char str4[] = "";
    char expected4[] = "";
    ft_tolower(str4);
    printf("Test 4 %s\n", strcmp(str4, expected4) == 0 ? "անցավ" : "ձախողվեց");

    // Test case 5: Միայն փոքրատառերով տող, որտեղ փոփոխություն չպետք է լինի
    char str5[] = "all lowercase";
    char expected5[] = "all lowercase";
    ft_tolower(str5);
    printf("Test 5 %s\n", strcmp(str5, expected5) == 0 ? "անցավ" : "ձախողվեց");
}

int main() {
    test_ft_tolower();
    return 0;
}
*/