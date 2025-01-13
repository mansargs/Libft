/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:33:24 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:57:27 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *str)
{
	int	i;

	i = -1;
	if (str == 0 || str[0] == '\0')
		return (str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_toupper(char *str);

void	test_ft_toupper(void) {
	// Test case 1: Normal string with lowercase letters
	char str1[] = "hello world";
	char expected1[] = "HELLO WORLD";
	ft_toupper(str1);
	printf("Test 1 %s\n", strcmp(str1, expected1) == 0 ? "passed" : "failed");

	// Test case 2: String with mixed case and symbols
	char str2[] = "HeLLo, WoRLD!";
	char expected2[] = "HELLO, WORLD!";
	ft_toupper(str2);
	printf("Test 2 %s\n", strcmp(str2, expected2) == 0 ? "passed" : "failed");

	// Test case 3: String with numbers and special characters
	char str3[] = "123!@# abc DEF";
	char expected3[] = "123!@# ABC DEF";
	ft_toupper(str3);
	printf("Test 3 %s\n", strcmp(str3, expected3) == 0 ? "passed" : "failed");

	// Test case 4: Empty string
	char str4[] = "";
	char expected4[] = "";
	ft_toupper(str4);
	printf("Test 4 %s\n", strcmp(str4, expected4) == 0 ? "passed" : "failed");

	// Test case 5: String with only uppercase letters
	char str5[] = "ALL CAPS";
	char expected5[] = "ALL CAPS";
	ft_toupper(str5);
	printf("Test 5 %s\n", strcmp(str5, expected5) == 0 ? "passed" : "failed");
}

int	main(void) {
	test_ft_toupper();
	return (0);
}
*/