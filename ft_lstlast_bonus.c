/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <mansargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:10:12 by manvel            #+#    #+#             */
/*   Updated: 2025/01/23 22:38:17 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int main ()
{
	t_list ob1, ob2, ob3, ob4;

	ob1.next = &ob2;
	ob2.next = &ob3;
	ob3.next = &ob4;
	ob4.next = NULL;

	printf("pointer to ob1 ------> %p\n", &ob1);
	printf("pointer to ob1->next  to ob2 ------> %p\n", ob1.next);
	printf("pointer to ob2 ------> %p\n", &ob2);
	printf("pointer to ob2->next  to ob3 ------> %p\n", ob2.next);
	printf("pointer to ob3 ------> %p\n", &ob3);
	printf("pointer to ob3->next  to ob4 ------> %p\n", ob3.next);
	printf("pointer to ob4 ------> %p\n", &ob4);
	printf("pointer to ob4->next  to null ------> %p\n", ob4.next);
	printf("pointer to last node ------> %p\n", ft_lstlast(NULL));
	return (0);
}
*/
