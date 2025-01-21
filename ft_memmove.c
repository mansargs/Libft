/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:28:36 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/21 20:32:30 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
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
/*

int main()
{
	//char X[12];
	char Y[15] = "42 Yerevan";
	printf("Our return is %s\n", ft_memmove(Y + 3,Y,11));
}
*/
