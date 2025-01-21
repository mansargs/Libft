/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:11 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/14 21:40:56 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		++i;
	}
	return (NULL);
}
