#include <stdlib.h>

void *ft_memcpy(void * dest, void *source, size_t n)
{
    unsigned char *dst = (unsigned char *)dest;
    unsigned char *src = (unsigned char *)source;

    if (n == 0)
        return NULL;
    while (n--)
    {
        *dst = *src;
        dst++;
        src++;
    }
    return (void *)dst;
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper function to print test results
void print_result(const char *test_case, void *expected, void *actual, size_t n) {
    if (memcmp(expected, actual, n) == 0) {
        printf("[PASS] %s\n", test_case);
    } else {
        printf("[FAIL] %s\n", test_case);
    }
}

int main() {
    // Test 1: Basic copy
    {
        char src[] = "Hello, World!";
        char dst1[20] = {0};
        char dst2[20] = {0};

        memcpy(dst1, src, 13);
        ft_memcpy(dst2, src, 13);

        print_result("Basic copy", dst1, dst2, 13);
    }

    // Test 2: Copy zero bytes
    {
        char src[] = "No change";
        char dst1[20] = "Initial data";
        char dst2[20] = "Initial data";

        memcpy(dst1, src, 0);
        ft_memcpy(dst2, src, 0);

        print_result("Zero bytes copy", dst1, dst2, 20);
    }

    // Test 3: Copy with overlap (undefined behavior in memcpy)
    {
        char src_dst1[] = "Overlap test";
        char src_dst2[] = "Overlap test";

        memcpy(src_dst1 + 3, src_dst1, 5); // Overlapping behavior
        ft_memcpy(src_dst2 + 3, src_dst2, 5);

         printf("After overlap copy:\n");
        printf("src_dst1: %s (standard memcpy)\n", src_dst1);
        printf("src_dst2: %s (ft_memcpy)\n", src_dst2);

        print_result("Overlap copy (undefined behavior)", src_dst1, src_dst2, 12);
    }

    // Test 4: Copy large buffer
    {
        char *src = malloc(1000);
        char *dst1 = malloc(1000);
        char *dst2 = malloc(1000);

        if (!src || !dst1 || !dst2) {
            perror("malloc failed");
            return 1;
        }

        memset(src, 'A', 1000);
        memcpy(dst1, src, 1000);
        ft_memcpy(dst2, src, 1000);

        print_result("Large buffer copy", dst1, dst2, 1000);

        free(src);
        free(dst1);
        free(dst2);
    }

    // Test 5: Copy non-character data (integer array)
    {
        int src[] = {1, 2, 3, 4, 5};
        int dst1[5] = {0};
        int dst2[5] = {0};

        memcpy(dst1, src, 5 * sizeof(int));
        ft_memcpy(dst2, src, 5 * sizeof(int));

        print_result("Integer array copy", dst1, dst2, 5 * sizeof(int));
    }

    // Test 6: Copy to NULL (expect segmentation fault if attempted)
    {
        char src[] = "Should not crash";
        char *dst = NULL;

        // Uncomment to test behavior (expect crash or undefined behavior)
        //memcpy(dst, src, 5);
         ft_memcpy(dst, src, 5);
    }

    printf("All tests completed.\n");

    return 0;
}
*/