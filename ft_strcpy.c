/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:30:05 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/14 17:27:23 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest);
}
