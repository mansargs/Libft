#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

// Your function prototype
size_t	ft_strlen(const char *s);

void	test_ft_strlen(void) {
	// Test cases
	const char *test_cases[] = {
		"",                     // Empty string
		"Hello, world!",        // Regular string
		" ",                    // Single space
		"1234567890",           // Digits only
		"\n\t",                 // Escape characters
		"This is a long string with multiple words.",  // Longer string
		"💻📱🌍",               // Emoji (if `strlen` counts bytes)
	};

	// Expected results
	size_t expected[] = {
		strlen(""),
		strlen("Hello, world!"),
		strlen(" "),
		strlen("1234567890"),
		strlen("\n\t"),
		strlen("This is a long string with multiple words."),
		strlen("💻📱🌍"),
	};

	int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

	// Run tests
	for (int i = 0; i < num_tests; i++) {
		size_t result = ft_strlen(test_cases[i]);
		assert(result == expected[i]);
		printf("Test %d passed: ft_strlen(\"%s\") = %zu\n", i + 1,
			test_cases[i], result);
	}
}

int	main(void) {
	test_ft_strlen();
	printf("All tests passed!\n");
	return (0);
}
*/
