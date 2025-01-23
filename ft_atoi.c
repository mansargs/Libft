/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:35:54 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/23 16:25:37 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		num;
	int		sign;

	sign = 1;
	i = 0;
	num = 0;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
		num = 10 * num + (str[i++] - 48);
	return (sign * num);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Assuming your `ft_atoi` prototype is:
int		ft_atoi(const char *str);

// Helper function to run individual tests and compare results
void	test_atoi(const char *str) {
	int original_result = atoi(str);
	int ft_result = ft_atoi(str);
	printf("Test string: \"%s\"\n", str);
	printf("Original atoi: %d\n", original_result);
	printf("Your ft_atoi:  %d\n", ft_result);
	if (original_result == ft_result) {
		printf("Result: PASS\n");
	} else {
		printf("Result: FAIL\n");
	}
	printf("--------------------------\n");
}

int	main(void) {
	// Test cases
	test_atoi("123");              // Simple positive number
	test_atoi("-456");             // Simple negative number
	test_atoi("   789");           // Leading whitespace
	test_atoi("42abc");            // Number followed by characters
	test_atoi("abc42");
		// Characters followed by numbers (should return 0)
	test_atoi("+987");             // Positive sign
	test_atoi("   -123abc");       // Mixed: whitespace, sign, number,
		characters
	test_atoi("");                 // Empty string (should return 0)
	test_atoi("   +0");            // Zero with sign and whitespace
	test_atoi("2147483647");       // INT_MAX
	test_atoi("-2147483648");      // INT_MIN
	test_atoi("2147483648");       // Overflow above INT_MAX
	test_atoi("-2147483649");      // Underflow below INT_MIN
	test_atoi("   \t\n\r\f\v123"); // Mixed whitespace characters

	return (0);
}
*/
