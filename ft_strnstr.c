/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:11 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/23 17:56:34 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (i + j < len && to_find[j] && to_find[j] == str[i + j])
		{
			++j;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char haystack[30] = "abcabcd";
	char needle[10] = "aabc";

	printf("our str ------->%s\n", ft_strnstr(haystack, needle, -1));
	return (0);
}
*/
