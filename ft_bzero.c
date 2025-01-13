/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:24:09 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:42:06 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	unsigned char	*ptr;

	if (buffer == NULL || n == 0)
		return ;
	ptr = (unsigned char *)buffer;
	while (n--)
		*ptr++ = '\0';
}
