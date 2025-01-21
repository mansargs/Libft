/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:30:45 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/21 21:37:30 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	j = 0;
	if (dst == NULL || src == NULL)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen((const char *) dst);
	i = dst_len;
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (src[j] && (i < dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (src_len + dst_len);
}

/*
#include <stdio.h>
#include <string.h>

void	test_strlcat_size_0(void) {
	char dst[10] = "Hello";
	char dst_ft[10] = "Hello";
	char src[] = "world";
	size_t original_result = strlcat(dst, src, 0);
	size_t ft_result = ft_strlcat(dst_ft, src, 0);

	printf("Test case: dstsize = 0\n");
	printf("Original: %zu, ft: %zu\n", original_result, ft_result);
	printf("Original dst: \"%s\", ft dst: \"%s\"\n\n", dst, dst_ft);
}

void	test_strlcat_dstsize_smaller_than_dst_length(void) {
	char dst[10] = "Hello";
	char dst_ft[10] = "Hello";
	char src[] = "world";
	size_t original_result = strlcat(dst, src, 3);
	size_t ft_result = ft_strlcat(dst_ft, src, 3);

	printf("Test case: dstsize < strlen(dst)\n");
	printf("Original: %zu, ft: %zu\n", original_result, ft_result);
	printf("Original dst: \"%s\", ft dst: \"%s\"\n\n", dst, dst_ft);
}

void	test_strlcat_empty_dst_and_src(void) {
	char dst[1] = "";
	char dst_ft[1] = "";
	char src[] = "";
	size_t original_result = strlcat(dst, src, 1);
	size_t ft_result = ft_strlcat(dst_ft, src, 1);

	printf("Test case: Empty dst and src\n");
	printf("Original: %zu, ft: %zu\n", original_result, ft_result);
	printf("Original dst: \"%s\", ft dst: \"%s\"\n\n", dst, dst_ft);
}

void	test_strlcat_src_too_long_for_dst(void) {
	char dst[15] = "Hello";
	char dst_ft[15] = "Hello";
	char src[] = "worldworldworld";
	size_t original_result = strlcat(dst, src, sizeof(dst));
	size_t ft_result = ft_strlcat(dst_ft, src, sizeof(dst));

	printf("Test case: src too long for dst\n");
	printf("Original: %zu, ft: %zu\n", original_result, ft_result);
	printf("Original dst: \"%s\", ft dst: \"%s\"\n\n", dst, dst_ft);
}

void	test_strlcat_exact_dst_length_plus_one(void) {
	char dst[10] = "Hello";
	char dst_ft[10] = "Hello";
	char src[] = "world";
	size_t original_result = strlcat(dst, src, strlen(dst) + 1);
	size_t ft_result = ft_strlcat(dst_ft, src, strlen(dst) + 1);

	printf("Test case: dstsize = strlen(dst) + 1\n");
	printf("Original: %zu, ft: %zu\n", original_result, ft_result);
	printf("Original dst: \"%s\", ft dst: \"%s\"\n\n", dst, dst_ft);
}

int	main(void) {
	printf("Running tests for ft_strlcat vs strlcat on edge cases:\n\n");

	test_strlcat_size_0();
	test_strlcat_dstsize_smaller_than_dst_length();
	test_strlcat_empty_dst_and_src();
	test_strlcat_src_too_long_for_dst();
	test_strlcat_exact_dst_length_plus_one();

	return (0);
}
*/
