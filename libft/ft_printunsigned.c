/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:59:47 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/11 17:14:08 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printunsigned(unsigned int uns)
{
	int	c;

	c = 0;
	if (uns >= 10)
		c += ft_printunsigned(uns / 10);
	ft_putchar(uns % 10 + '0');
	c++;
	return (c);
}
