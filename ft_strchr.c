#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    int i;

    if (!str)
        return (0);
    i = 0;
    while (str[i])
        ++i;
    return (i);
}

char *ft_strchr(const char *str,int c)
{
    if (str == NULL)
        return (NULL);
    unsigned char search_char= (unsigned char)c;
    if (c == '\0')
        return  ((char *)str + ft_strlen(str));
    
    while (*str != '\0')
    {
        if (*str == search_char)
            return ((char *)str);
        ++str;
    }
    return (NULL);
}

/*
void test_ft_strchr(const char *s, int c) {
    char *result = ft_strchr(s, c);
    char *expected = strchr(s, c);

    if (result == expected) {
        printf("PASSED: ft_strchr(\"%s\", '%c') -> %p\n", s, c, (void*)result);
    } else {
        printf("FAILED: ft_strchr(\"%s\", '%c') -> %p (expected %p)\n", s, c, (void*)result, (void*)expected);
    }
}

int main() {
    // Test 1: Searching for a character that is present
    test_ft_strchr("hello world", 'o'); // Should pass: returns pointer to the first 'o'

    // Test 2: Searching for a character that is not present
    test_ft_strchr("hello world", 'z'); // Should pass: returns NULL

    // Test 3: Searching for the null character in a non-empty string
    test_ft_strchr("hello world", '\0'); // Should pass: returns pointer to the null terminator at the end

    // Test 4: Searching for a character in an empty string
    test_ft_strchr("", 'a'); // Should pass: returns NULL (no characters)

    // Test 5: Searching for a null character in an empty string
    test_ft_strchr("", '\0'); // Should pass: returns pointer to the null terminator of the empty string

    // Test 6: Multiple null characters (should return pointer to the first one)
    test_ft_strchr("abc\0def\0ghi", '\0'); // Should pass: returns pointer to the first '\0' after 'abc'

    // Test 7: Searching for the first character in the string
    test_ft_strchr("abcdef", 'a'); // Should pass: returns pointer to 'a'

    // Test 8: Searching for the last character in the string
    test_ft_strchr("abcdef", 'f'); // Should pass: returns pointer to 'f'

    // Test 9: Searching for the first null character in a string
    test_ft_strchr("abc\0def", '\0'); // Should pass: returns pointer to the null character after 'abc'

    // Test 10: Searching for the middle character in the string
    test_ft_strchr("abcdef", 'd'); // Should pass: returns pointer to 'd'

    return 0;
}
*/