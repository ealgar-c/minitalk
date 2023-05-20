#include "libft/libft.h"
#include <signal.h>

void	action(int sigsent)
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
}

int	main(void)
{
	ft_printf("El ID del cliente es: %i\n", getpid());
	signal(SIGUSR2, action);
	signal(SIGUSR1, action);
	while (1)
		pause();
	return (0);
}
