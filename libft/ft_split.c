/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:18:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:08:29 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_cntwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	ft_free(char **str, int str_ind)
{
	while (str_ind-- > 0)
		free(str[str_ind]);
	free(str);
}

static int	ft_wordlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		str_ind;

	i = 0;
	str_ind = -1;
	str = malloc(sizeof(char *) * (ft_cntwords (s, c) + 1));
	if (!str)
		return (0);
	while (++str_ind < ft_cntwords (s, c))
	{
		while (s[i] == c)
			i++;
		str[str_ind] = ft_substr(s, i, ft_wordlen(s, c, i));
		if (!(str[str_ind]))
		{
			ft_free(str, str_ind);
			return (0);
		}
		i += ft_wordlen(s, c, i);
	}
	str[str_ind] = 0;
	return (str);
}
