/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:24:21 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:42:19 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		*(mem + i) = 0;
		++i;
	}
	return ((void *)mem);
}
