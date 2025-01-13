/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:24 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:56:54 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (to_find == NULL || str == NULL)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[++i])
	{
		if (str[i] == to_find[j])
			++j;
		else
			j = 0;
		if (to_find[j] == '\0')
			return (char *)(str + i - j + 1);
	}
	return (NULL);
}
