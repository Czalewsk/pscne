#include <stdio.h>
#include <stdlib.h>

int		pgcd(int nb1, int nb2)
{
	int pgcd;
	int d1;
	int d2;
	int dc;

	dc = 1;
	pgcd = 1;
	while ((dc <= nb1) && (dc <= nb2))
	{
		if (nb1 == dc * (nb1 / dc))
			d1 = dc;
		if (nb2 == dc * (nb2 / dc))
			d2 = dc;
		if (d1 == d2)
			pgcd = d1;
		dc++;
	}
	return (pgcd);
}

int		main(int ac, char **av)
{
	int nb1;
	int nb2;
	if (ac == 3)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		printf("pgcd de %i et de %i est : %i", nb1, nb2, pgcd(nb1, nb2));
	}
	printf("\n");
	return (0);
}
