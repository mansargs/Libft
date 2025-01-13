/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:28:36 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:43:31 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (unsigned char *)dest;
	i = 0;
	if (d == s || n == 0)
		return (dest);
	if ((s < d && (s + n) > d) || (d < s && (d + n) > s))
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
	{
		while (n--)
		{
			*(d + i) = *(s + i);
			++i;
		}
	}
	return (dest);
}
