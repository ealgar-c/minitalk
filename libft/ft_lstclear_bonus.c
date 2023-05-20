/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:14:54 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:41 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*act;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		del((*lst)->content);
		act = *lst;
		*lst = act->next;
		free(act);
	}
	*lst = 0;
}
