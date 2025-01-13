#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)str);
	if (str == NULL || to_find == NULL)
	{
		return (NULL);
	}
	while (*(to_find + j) != '\0' && *(str + i) != '\0' && i < len)
	{
		if (*(str + i) == *(to_find + j))
			j++;
		else
			j = 0;
		if (*(to_find + j) == '\0')
			return ((char *)(str + i - j + 1));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

// Your custom `ft_strnstr` function declaration
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

// Helper function to check the result of `ft_strnstr`
void	check_ft_strnstr(const char *str, const char *to_find, size_t len,
		const char *expected) {
	char *result_ft = ft_strnstr(str, to_find, len);

	if ((result_ft == expected) || (result_ft && expected && strcmp(result_ft,
				expected) == 0)) {
		printf("PASSED: str: \"%s\", to_find: \"%s\", len: %zu\n", str, to_find,
			len);
		printf("Expected: %s, Got: %s\n\n", expected ? expected : "NULL",
			result_ft ? result_ft : "NULL");
	} else {
		printf("FAILED: str: \"%s\", to_find: \"%s\", len: %zu\n", str, to_find,
			len);
		printf("Expected: %s, Got: %s\n\n", expected ? expected : "NULL",
			result_ft ? result_ft : "NULL");
	}
}

int	main(void) {
	// Advanced test cases for `ft_strnstr`

	// 1. Simple match at the beginning
	check_ft_strnstr("hello world", "hello", 5, "hello world");

	// 2. Match near the end, but within range
	check_ft_strnstr("this is a string", "string", 16, "string");

	// 3. Match is partially cut by len limit
	check_ft_strnstr("abcdefg", "efg", 5, NULL);

	// 4. Needle appears more than once; should return the first occurrence
	check_ft_strnstr("repeat repeat", "repeat", 14, "repeat repeat");

	// 5. Needle overlaps in a repeating sequence; should return first valid occurrence
	check_ft_strnstr("ababababab", "abab", 8, "ababababab");

	// 6. Empty needle should return full haystack
	check_ft_strnstr("nothing to find", "", 5, "nothing to find");

	// 7. Empty haystack and non-empty needle should return NULL
	check_ft_strnstr("", "needle", 5, NULL);

	// 8. Needle length exceeds haystack length
	check_ft_strnstr("small", "largerneedle", 10, NULL);

	// 9. Needle is exactly at the boundary of len
	check_ft_strnstr("boundarycheck", "check", 12, "check");

	// 10. Special characters in both haystack and needle
	check_ft_strnstr("str@nge&chars!", "@nge&c", 12, "@nge&chars!");

	// 11. Len is zero; should always return NULL
	check_ft_strnstr("no matter the content", "content", 0, NULL);

	// 12. Haystack with null terminator halfway through
	check_ft_strnstr("partial\0hidden", "hidden", 20, NULL);

	// 13. Matching substring found, but only part of it fits within len
	check_ft_strnstr("findmehere", "here", 8, NULL);

	// 14. Needle and haystack are identical
	check_ft_strnstr("exactmatch", "exactmatch", 20, "exactmatch");

	// 15. Very long haystack with needle at the end but not within len
	check_ft_strnstr("a very long string with needle right at the end needle",
		"needle", 45, NULL);

	// 16. Complex pattern with overlapping sequence in the haystack
	check_ft_strnstr("abababababababab", "ababab", 12, "abababababababab");

	// 17. Needle found multiple times within haystack,
		should return first occurrence within len
	check_ft_strnstr("looklooklooklook", "look", 10, "looklooklooklook");

	// 18. Needle exactly matches the len limit within the haystack
	check_ft_strnstr("matchboundaryexactly", "boundary", 18, "boundaryexactly");

	// 19. Haystack with embedded null terminators between matching segments
	check_ft_strnstr("abc\0defabc", "abc", 10, "abc");

	// 20. Haystack and needle both have special non-printable characters
	check_ft_strnstr("ab\001\002\003\004cd", "\001\002\003", 6,
		"\001\002\003\004cd");
	return (0);
}
*/