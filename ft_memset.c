#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;  
    unsigned char ch = (unsigned char)c;       

    for (size_t i = 0; i < n; ++i)
        ptr[i] = ch; 

    return s;  
}

#include <stdio.h>
#include <string.h>
#include <assert.h>

// Your ft_memset declaration
void *ft_memset(void *s, int c, size_t n);

// Test case for ft_memset
void test_ft_memset() {
    // Case 1: Basic test (filling a small array)
    char buffer1[10];
    char buffer2[10];
    memset(buffer1, 'A', 10);
    ft_memset(buffer2, 'A', 10);
    assert(memcmp(buffer1, buffer2, 10) == 0 && "Test Case 1 failed!");

    // Case 2: n = 0 (no bytes should be written)
    memset(buffer1, 'B', 10);
    ft_memset(buffer2, 'B', 10);
    ft_memset(buffer2, 'C', 0);  // Should do nothing
    assert(memcmp(buffer1, buffer2, 10) == 0 && "Test Case 2 failed!");

    // Case 3: Large memory block
    size_t large_size = 1000000;  // 1 million bytes
    char *large_buf1 = malloc(large_size);
    char *large_buf2 = malloc(large_size);
    memset(large_buf1, 'X', large_size);
    ft_memset(large_buf2, 'X', large_size);
    assert(memcmp(large_buf1, large_buf2, large_size) == 0 && "Test Case 3 failed!");
    free(large_buf1);
    free(large_buf2);

    // Case 4: Negative c value (-1 should become 255)
    memset(buffer1, -1, 10);
    ft_memset(buffer2, -1, 10);
    assert(memcmp(buffer1, buffer2, 10) == 0 && "Test Case 4 failed!");

    // Case 5: Aliasing test (multiple sets on same buffer)
    char buffer3[10];
    ft_memset(buffer3, 'Y', 10);
    ft_memset(buffer3, 'Z', 5);  // Only modify the first 5 bytes
    assert(strncmp(buffer3, "ZZZZZYYYYY", 10) == 0 && "Test Case 5 failed!");

    // Case 6: Compare against memset for all possible values of c
    for (int c = -128; c <= 127; c++) {
        memset(buffer1, c, 10);
        ft_memset(buffer2, c, 10);
        assert(memcmp(buffer1, buffer2, 10) == 0 && "Test Case 6 failed!");
    }

    printf("All test cases passed!\n");
}

int main() {
    test_ft_memset();
    return 0;
}
