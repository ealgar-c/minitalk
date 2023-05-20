/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:55:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:49 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	result;

	a = 0;
	b = 0;
	result = 0;
	while (dest[a] != '\0')
		a++;
	while (src[result] != '\0')
		result++;
	if (size <= a)
		result += size;
	else
		result += a;
	while (src[b] != '\0' && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char			s1[45] = "Sol ";
	char			s2[45] = "dejar de vivir";
	size_t	size;

	size = 2;
	printf("%s\n%u", s1, ft_strlcat(s1, s2, size));
	return (0);
}
*/
