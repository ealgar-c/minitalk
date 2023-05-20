/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:49:59 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/20 20:50:00 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	action(int sigsent, siginfo_t *info)
{
	static unsigned char	buff;
	static int				i;

	buff |= (sigsent == SIGUSR1);
	i++;
	if (i == 8)
	{
		ft_printf("%c", buff);
		i = 0;
		buff = 0;
	}
	else
		buff <<= 1;
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = action;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	ft_printf("El ID del cliente es: %i\n", getpid());
	sigaction(SIGUSR2, &sa);
	sigaction(SIGUSR1, &sa);
	while (1)
		pause();
	return (0);
}
