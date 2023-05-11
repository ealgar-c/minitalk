#include "libft/libft.h"
#include <signal.h>

int main(int argc, int **argv)
{
	int	client_id;

	if (argc != 2)
	{
		ft_printf("Los parametros recibidos no son correctos");
		return (0);
	}
	client_id = ft_atoi(argv[1]);
	kill(client_id, 9);
}
