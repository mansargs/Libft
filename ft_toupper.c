/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:33:24 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 21:20:53 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	char	c;

	c = (unsigned char)ch;
	if (c > 96 && c < 123)
		return (ch - 32);
	return (ch);
}
/*
#include <stdio.h>
#include <ctype.h> // For comparison with the standard toupper

int main(void)
{
    // Array of test cases
    int test_cases[] = {
        'a', 'z',       // Lowercase letters
        'A', 'Z',       // Uppercase letters
        '0', '9',       // Digits
        '!', '@', '#',  // Symbols
        EOF,            // End of File
        -1, 128, 255    // Edge cases outside ASCII range
    };

    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("Testing ft_toupper against standard toupper:\n");
    printf("-------------------------------------------------\n");
    printf("| Input    | ft_toupper | toupper    | Matches? |\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < num_cases; i++)
    {
        int input = test_cases[i];
        int ft_result = ft_toupper(input);
        int std_result = toupper(input);

        printf("| %-8d | %-10d | %-10d | %-8s |\n",
               input,
               ft_result,
               std_result,
               (ft_result == std_result) ? "Yes" : "No");
    }

    printf("-------------------------------------------------\n");
    return 0;
}
*/
