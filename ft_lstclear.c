/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:52:51 by manvel            #+#    #+#             */
/*   Updated: 2025/01/18 17:09:09 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **lst, void (*del)(void *))
{
    t_list *next;

    while(*lst)
    {
        del((*lst)->content);
        free(*lst);
        next = (*lst)->next
    }
}