/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvel <manvel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:12:59 by manvel            #+#    #+#             */
/*   Updated: 2025/01/18 16:40:04 by manvel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    if (!lst || new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;  
    }
    last = ft_lstlast(*lst);
    last->next = new;
}