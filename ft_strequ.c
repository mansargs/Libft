/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:30:25 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 19:55:13 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *str1, const char *str2)
{
	int	i;

	i = -1;
	if (str1 == NULL || str2 == NULL)
		return (0);
	while (str1[++i] && str2[i] && str1[i] == str2[i])
		;
	if (str1[i] != str2[i])
		return (0);
	return (1);
}
