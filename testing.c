#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdbool.h>

unsigned char new_octet = 0;

void	send_bit(unsigned char i)
{
	new_octet = new_octet ^ i;
	new_octet = new_octet << 1;
}

bool	octet_even(unsigned char octet)
{
	if (octet % 2 == 0)
		return (true);
	return (false);
}

void	send_octet(unsigned char octet)
{
	int	i;

	i = 0;
	while (i++ <= 8)
	{
		if (octet_even(octet))
			send_bit(0);
		else
			send_bit(1);
		octet = octet >> 1;
	}
}

int	main(void)
{
	unsigned char	octet;
	unsigned char	octet2;
	unsigned char	octet3;

	octet2 = 103;
	octet3 = 76;

	octet = 255;
	printf("el número original: %u\n", octet);
	printf("el número complementario(not octet): %u\n", (unsigned char)~octet);
	printf("el número al desplazar a la derecha(octet >> 1): %u\n", (unsigned char)octet >> 1);
	printf("el número al desplazar a la izquierda(octet << 1): %u\n\n", (unsigned char)(octet << 1));
	printf("el número 2 original: %u\n", octet2);
	printf("el número 3 original: %u\n", octet3);
	printf("el número resultante de AND(octet2 && octet3): %u\n", (unsigned int)(octet2 & octet3));
	printf("el número resultante de OR(octet2 | octet3): %u\n", (unsigned int)(octet2 | octet3));
	printf("el número resultante de XOR(octet2 ^ octet3): %u\n", (unsigned int)(octet2 ^ octet3));
	printf("la id de este proceso es : %i\n",getpid());
	send_octet(octet2);
	printf("el número recibido es el %u (está mal)\n", (unsigned int)new_octet);
	return (0);
}
/*

8		7		6		5		4		3		2		1		0
256		128		64		32		16		8		4		2		1
		1		1		1		1		1		1		1		1	(255)	//		octet		//

		0		0		0		0		0		0		0		0	( 0 )	//		~octet		//
		0		1		1		1		1		1		1		1	(127)	//		octet >> 1	//
		1		1		1		1		1		1		1		0	(254)	//	octet << 1		//

		0		1		1		0		0		1		1		1	(103)	//		octet2		//
		0		1		0		0		1		1		0		0	(076)	//		octet3		//

		0		1		0		0		0		1		0		0	(064)	//	octet2 & octet3 //
		0		1		1		0		1		1		1		1	(111)	//	octet2 | octet3	//
		0		0		1		0		1		0		1		1	(043)	//	octet2 ^ octet3	//



1		0		0		0		0		0		0		0		0	(256)	

1		1		1		1		1		1		1		1		0 (510)

*/