/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:50:07 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/22 11:08:41 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	killing_func(int pid, unsigned char octet)
{
	int				i;
	unsigned char	octet_tmp;

	octet_tmp = octet;
	i = 8;
	while (i-- > 0)
	{
		octet_tmp = octet >> i;
		if (octet_tmp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(1500);
	}
}

void	confirmation_handler(int sigsent)
{
	if (sigsent == SIGUSR1)
		ft_printf("1");
	else if (sigsent == SIGUSR2)
		ft_printf("0");
}

int	main(int argc, char **argv)
{
	int		client_id;
	char	*str_to_send;
	int		i;

	signal(SIGUSR1, confirmation_handler);
	signal(SIGUSR2, confirmation_handler);
	if (argc != 3)
	{
		ft_printf("Los parametros recibidos no son correctos\n");
		return (0);
	}
	client_id = ft_atoi(argv[1]);
	str_to_send = argv[2];
	i = 0;
	while (str_to_send[i])
	{
		killing_func(client_id, (unsigned char)str_to_send[i]);
		i++;
	}
	ft_printf("\nSe han escrito %i caracteres\n", i);
	return (0);
}
