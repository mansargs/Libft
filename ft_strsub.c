/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:31 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:57:09 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;

	s_len = ft_strlen(s);
	i = 0;
	if (s == NULL || start > s_len || len > s_len - start)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (start < s_len && s[start] && (len--))
	{
		str[i] = s[start];
		++start;
		++i;
	}
	str[i] = '\0';
	return (str);
}
