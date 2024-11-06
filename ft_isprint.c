int ft_isprint(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] < 32 || str[i] > 126)
            return (0);
    }
    return (1);
}
/*
#include <stdio.h>

void test_ft_isprint(char *str, int expected)
{
    int result = ft_isprint(str);
    if (result == expected)
        printf("PASS: \"%s\" -> %d\n", str, result);
    else
        printf("FAIL: \"%s\" -> %d (expected %d)\n", str, result, expected);
}

int main(void)
{
    // Test cases
    test_ft_isprint("Hello, World!", 1);         // All printable characters
    test_ft_isprint("12345", 1);                 // Only digits, should pass
    test_ft_isprint("Hello\tWorld", 0);          // Contains a tab, should fail
    test_ft_isprint("Printable!", 1);            // All printable characters
    test_ft_isprint("Newline\nTest", 0);         // Contains newline, should fail
    test_ft_isprint("", 1);                      // Empty string, should pass
    test_ft_isprint("End with non-print:\x7F", 0); // Contains ASCII 127, shou
    printf("All tests completed.\n");
    return 0;
} */