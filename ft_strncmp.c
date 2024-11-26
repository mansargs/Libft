#include <stdlib.h>

int ft_strncmp(const char *str1,const char *str2 , size_t len)
{
    size_t i;

    i = 0;
    while (str1[i] != '\0' && i < len)
    {
        if (str1[i] != str2[i])
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        ++i;
    }
    if (i == len)
         return (0);
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}
/*
#include <stdio.h>
#include <string.h>

// Prototype for your ft_strncmp function
int ft_strncmp(const char *s1, const char *s2, size_t n);

// Function to compare your ft_strncmp with the original strncmp
void test_strncmp(const char *s1, const char *s2, size_t n) {
    int original = strncmp(s1, s2, n);
    int custom = ft_strncmp(s1, s2, n);
    
    printf("Comparing \"%s\" and \"%s\" up to %zu characters:\n", s1, s2, n);
    printf("Original: %d, Custom: %d\n", original, custom);

    if ((original == 0 && custom == 0) || (original < 0 && custom < 0) || (original > 0 && custom > 0)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
    printf("-----------------------\n");
}

int main() {
    // Test cases
    test_strncmp("hello", "hello", 5);         // Exact match
    test_strncmp("hello", "world", 5);         // Completely different
    test_strncmp("abc", "abcd", 3);            // Match up to n characters
    test_strncmp("abcd", "abc", 4);            // Different length strings
    test_strncmp("abcdef", "abcxyz", 3);       // Match first n characters
    test_strncmp("abcdef", "abcxyz", 4);       // Mismatch at n
    test_strncmp("test", "testing", 10);       // n is larger than either string
    test_strncmp("422", "", 5);                   // Both strings empty
    test_strncmp("a", "b", 1);                // Single character difference
    return 0;
}
*/