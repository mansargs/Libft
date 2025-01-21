/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:30:20 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/15 20:45:26 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*dest;

	i = 0;
	len = ft_strlen(str);
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
