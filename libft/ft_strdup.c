/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:16:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:34 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc((ft_strlen(s1)+1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (i <= (size_t)(ft_strlen(s1)))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
