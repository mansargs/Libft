/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:32:07 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:56:44 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i <= size)
	{
		*(ptr + i) = '\0';
		++i;
	}
	return (ptr);
}
