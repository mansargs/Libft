/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:03:13 by mansargs          #+#    #+#             */
/*   Updated: 2025/01/13 18:05:00 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int	i;

	i = -1;
	if (str == 0 || str[0] == '\0')
		return (0);
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    printf("Is digit : %d ", ft_isdigit(""));
}
*/