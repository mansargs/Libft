/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:29:57 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/14 21:46:17 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	search_char;

	if (str == NULL)
		return (NULL);
	search_char = (unsigned char)c;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str != '\0')
	{
		if (*str == search_char)
			return ((char *)str);
		++str;
	}
	return (NULL);
}
