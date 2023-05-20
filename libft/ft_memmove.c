/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:32:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:01 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (0);
	i = 0;
	ptr_dest = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dest > ptr_src)
	{
		while (len-- != 0)
			ptr_dest[len] = ptr_src[len];
	}
	else
	{
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
