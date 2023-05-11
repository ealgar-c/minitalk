/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:47:12 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/19 15:01:51 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)malloc(size * num);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (num * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
