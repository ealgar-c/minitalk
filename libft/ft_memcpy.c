/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:12:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:10 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		cont;
	char		*ptr_dest;
	const char	*ptr_src;

	if (!src && !dst)
		return (0);
	ptr_dest = (char *)dst;
	ptr_src = (const char *)src;
	cont = 0;
	while (cont < n)
	{
		ptr_dest[cont] = (const char)ptr_src[cont];
		cont++;
	}
	return (dst);
}
