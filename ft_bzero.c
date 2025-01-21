/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:24:09 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/16 23:38:32 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)buffer;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		++i;
	}
}
