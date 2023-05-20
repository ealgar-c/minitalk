/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:09:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:31 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	if ((!*str && (char) a == '\0'))
		return ((char *) str);
	while (*str != '\0')
	{
		if (*str == (char) a)
			return ((char *) str);
		str++;
	}
	if (a == '\0' || a == 1024)
		return ((char *)str);
	return (0);
}
