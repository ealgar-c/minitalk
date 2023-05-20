/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:27:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:23 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			counter;
	unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}
