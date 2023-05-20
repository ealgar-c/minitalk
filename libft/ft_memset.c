/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:38:57 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:02 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)b;
	while (counter < len)
	{
		ptr[counter] = (unsigned char)c;
		counter++;
	}
	return (b);
}
