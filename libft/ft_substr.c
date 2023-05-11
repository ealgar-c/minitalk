/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:38:23 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/11 21:51:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_copy;

	if (!s)
		return (0);
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	s_copy = malloc((len + 1) * sizeof(char));
	if (s_copy == NULL)
		return (0);
	ft_memcpy(s_copy, s + start, len);
	s_copy[len] = '\0';
	return (s_copy);
}
