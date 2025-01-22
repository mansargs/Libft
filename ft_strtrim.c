/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:31:44 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/22 18:34:51 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(char const *s, char const *set)
{
	int	start;
	int	end;

	i = 0;
	end = ft_strlen(s) - 1;
	while (*s)
	{
		if (*s == set[i])
		{
			++i;
			if (set[i] == '\0')
			{
				i = 0;
			}
	}
}


char	*ft_strtrim(char const *s, char const *set)
{

}
