/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:31:44 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/23 15:18:45 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_strchr(set, s[start]))
		++start;
	while (s[end] && ft_strchr(set, s[end]))
		--end;
	if (end < start)
		trimmed = (char *)malloc(1);
	else
		trimmed = (char *)malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	if (end < start)
		trimmed[0] = '\0';
	else
		ft_strlcpy(trimmed, s + start, end - start + 2);
	return (trimmed);
}
