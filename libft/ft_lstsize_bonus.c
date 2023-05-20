/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:52:57 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*actual;

	if (!lst)
		return (0);
	i = 1;
	actual = lst;
	while (actual->next)
	{
		i++;
		actual = actual->next;
	}
	return (i);
}
