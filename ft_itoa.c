#include <stdlib.h>

size_t	count_char(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		++len;
	while (num / 10)
	{
		num /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	size_t	len;
	char	*str;
	int		limit;

	len = count_char(num);
	limit = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	*(str + len) = '\0';
	if (num < 0)
	{
		*str = '-';
		limit = 1;
		if (num == -2147483648)
		{
			num = (num + 1) * -1;
			*(str + --len) = '8';
			num /= 10;
		}
		else
			num = -num;
	}
	while (len > (long unsigned int)limit)
	{
		*(str + len - 1) = (num % 10) + '0';
		num = num / 10;
		--len;
	}
	return (str);
}

/*
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype for your ft_itoa function
char	*ft_itoa(int n);

void	test_itoa(int number, const char *expected) {
	char *result = ft_itoa(number);
	if (strcmp(result, expected) == 0) {
		printf("PASS: %d -> %s\n", number, result);
	} else {
		printf("FAIL: %d -> %s (expected: %s)\n", number, result, expected);
	}
	free(result); // Freeing if ft_itoa uses malloc internally
}

int	main(void) {
	// Edge cases
	test_itoa(0, "0");                     // Zero case
	test_itoa(INT_MAX, "2147483647");       // Maximum int value
	test_itoa(INT_MIN, "-2147483648");      // Minimum int value

	// Boundary values around zero
	test_itoa(1, "1");
	test_itoa(-1, "-1");

	// Powers of ten
	test_itoa(10, "10");
	test_itoa(100, "100");
	test_itoa(1000, "1000");
	test_itoa(10000, "10000");

	// Large negative numbers
	test_itoa(-10, "-10");
	test_itoa(-100, "-100");
	test_itoa(-1000, "-1000");
	test_itoa(-10000, "-10000");

	// Random large positive and negative numbers
	test_itoa(123456789, "123456789");
	test_itoa(-123456789, "-123456789");

	// Numbers with alternating digits
	test_itoa(12121212, "12121212");
	test_itoa(-12121212, "-12121212");

	// Large sequences of the same digit
	test_itoa(1111111111, "1111111111");
	test_itoa(-1111111111, "-1111111111");

	printf("All tests completed.\n");
	return (0);
}
*/