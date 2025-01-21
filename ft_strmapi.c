/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:31:29 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/15 21:26:09 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (f(i, s[i]) == 1)
			++count;
		++i;
	}
	return (count);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	char			*res;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	j = 0;
	size = len(s, f);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		if (f(i, s[i]) == 1)
		{
			res[j] = f(i, s[i]);
			++j;
		}
		++i;
	}
	res[j] = '\0';
	return (res);
}
