/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:37:42 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 21:07:35 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_dcount(long int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		n_copy;
	int				n_len;

	n_copy = n;
	if (n_copy < 0)
		n_copy *= -1;
	n_len = ft_dcount(n_copy);
	if (n < 0)
		n_len++;
	str = malloc((n_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_len--] = '\0';
	while (n_len >= 0)
	{
		str[n_len--] = (n_copy % 10) + '0';
		n_copy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
