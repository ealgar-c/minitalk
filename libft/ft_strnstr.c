/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:34:29 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/19 12:54:02 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	if (to_find[0] == '\0' || (len == 0 && !str))
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && (size_t)i < len)
	{
		j = 0;
		while (to_find[j] != '\0' && (size_t)i + j < len)
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
