/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:03:26 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:55 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*str;

	if (!s || !f)
		return (0);
	a = ft_strlen(s);
	str = malloc((a + 1) * sizeof(char));
	if (!str)
		return (NULL);
	a = 0;
	while (s[a])
	{
		str[a] = f(a, s[a]);
		a++;
	}
	str[a] = 0;
	return (str);
}
