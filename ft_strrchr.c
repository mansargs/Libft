/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:16 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:56:51 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	char			*last;
	unsigned char	search_char;

	last = NULL;
	if (str == NULL)
		return (NULL);
	search_char = (unsigned char)c;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str != '\0')
	{
		if (*str == search_char)
			last = (char *)str;
		++str;
	}
	return (last);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype for your ft_strrchr function
char	*ft_strrchr(const char *str, int c);

// Function to compare results of your implementation and the standard one
void	compare_results(char *your_result, char *expected_result,
		const char *test_case) {
	if (your_result == expected_result) {
		printf("%s: PASSED\n", test_case);
	} else {
		printf("%s: FAILED\n", test_case);
		printf("Your result: %s\n", your_result ? your_result : "NULL");
		printf("Expected result: %s\n",
			expected_result ? expected_result : "NULL");
	}
}

void	test_strrchr(void) {
	// Test 1: Empty string with a non-null character
	printf("Test 1: Empty string with a non-null character\n");
	compare_results(ft_strrchr("", 'a'), strrchr("", 'a'),
		"Empty string with 'a'");

	// Test 2: Character not found in string
	printf("Test 2: Character not found in string\n");
	compare_results(ft_strrchr("Hello World!", 'z'), strrchr("Hello World!",
			'z'), "Character 'z' not found");

	// Test 3: Character found at the end of the string
	printf("Test 3: Character found at the end of the string\n");
	compare_results(ft_strrchr("Hello World!", '!'), strrchr("Hello World!",
			'!'), "Character '!' at the end");

	// Test 4: Multiple occurrences of the character, check last occurrence
	printf("Test 4: Multiple occurrences of the character,
		check last occurrence\n");
	compare_results(ft_strrchr("abcdabcd", 'a'), strrchr("abcdabcd", 'a'),
		"Multiple 'a' occurrences");

	// Test 5: Character found at the beginning of the string
	printf("Test 5: Character found at the beginning of the string\n");
	compare_results(ft_strrchr("abcdef", 'a'), strrchr("abcdef", 'a'),
		"Character 'a' at the beginning");

	// Test 6: String with special characters
	printf("Test 6: String with special characters\n");
	compare_results(ft_strrchr("!@#$%^&*()_+", '%'), strrchr("!@#$%^&*()_+",
			'%'), "Special character '%'");

	// Test 7: Character is null terminator
	printf("Test 7: Character is null terminator\n");
	compare_results(ft_strrchr("Hello", '\0'), strrchr("Hello", '\0'),
		"Null terminator");

	// Test 8: Single character string
	printf("Test 8: Single character string\n");
	compare_results(ft_strrchr("a", 'a'), strrchr("a", 'a'),
		"Single character string 'a'");

	// Test 9: Character appears multiple times, check last occurrence
	printf("Test 9: Character appears multiple times, check last occurrence\n");
	compare_results(ft_strrchr("abababab", 'b'), strrchr("abababab", 'b'),
		"Multiple 'b' occurrences");

	// Test 10: Large string test
	printf("Test 10: Large string test\n");
	char large_str[1000000];
	memset(large_str, 'a', 999999);
	large_str[999999] = 'b';
	compare_results(ft_strrchr(large_str, 'b'), strrchr(large_str, 'b'),
		"Large string with 'b' at the end");

	// Test 11: Null string input
	printf("Test 11: Null string input\n");
	compare_results(ft_strrchr(NULL, 'a'), strrchr("", 'a'),
		"Null string input");

	// Test 12: Null character in middle of the string
	printf("Test 12: Null character in middle of the string\n");
	compare_results(ft_strrchr("Hello\0World", '\0'), strrchr("Hello\0World",
			'\0'), "Null character in middle");

	// Test 13: Search beyond string length
	printf("Test 13: Search beyond string length\n");
	compare_results(ft_strrchr("abcdef", 'g'), strrchr("abcdef", 'g'),
		"Character 'g' beyond string length");

	// Test 14: String with embedded null characters
	printf("Test 14: String with embedded null characters\n");
	char embedded_null_str[] = "Hello\0World\0More\0Text";
	compare_results(ft_strrchr(embedded_null_str, '\0'),
		strrchr(embedded_null_str, '\0'), "Embedded null characters");

	// Test 15: Search for the first occurrence in a string
	printf("Test 15: Search for the first occurrence in a string\n");
	compare_results(ft_strrchr("aaa", 'a'), strrchr("aaa", 'a'),
		"First occurrence of 'a'");
}

int	main(void) {
	test_strrchr();
	return (0);
}
*/