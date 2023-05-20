/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:20:22 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:09:03 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	initial_pos(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a])
	{
		while (set[b])
		{
			if (s1[a] == set[b])
			{
				a++;
				break ;
			}
			b++;
		}
		if (b == ft_strlen(set))
			return (a);
		b = 0;
	}
	return (0);
}

static int	final_pos(char const *s1, char const *set)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (s1[len])
		len++;
	while (len > 0)
	{
		while (set[j])
		{
			if (s1[len - 1] == set[j])
			{
				len--;
				break ;
			}
			j++;
		}
		if (j == ft_strlen((char *)set))
			return (len);
		j = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		fin;
	int		i;
	char	*ret_str;

	i = 0;
	ini = initial_pos(s1, set);
	fin = final_pos(s1, set);
	ret_str = malloc((fin - ini + 1) * sizeof(char));
	if (ret_str == NULL)
		return (NULL);
	while (ini < fin)
	{
		ret_str[i] = s1[ini];
		i++;
		ini++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
