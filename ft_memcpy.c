/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:28:29 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/21 13:08:35 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;
	
	i = 0;
	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	while (i < n)
	{
		*(dst + i) = *(src + i);
		++i;
	}
	return (dest);
}
