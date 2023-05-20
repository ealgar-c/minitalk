/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:31:54 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:49 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*actual;

	if (!lst)
		return (NULL);
	newlist = 0;
	while (lst)
	{
		actual = ft_lstnew(f(lst->content));
		if (actual)
		{
			ft_lstadd_back(&newlist, actual);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
	}
	return (newlist);
}
