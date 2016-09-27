#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		pgcd(int nb1, int nb2)
{
	int r;

	r = nb1 % nb2;
	if (r == 0)
		return (nb2);
	return (pgcd(nb2, r));
}

int		main(int ac, char **av)
{
	int nb1;
	int nb2;

	if (ac == 3)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		printf("PGCD(%i,%i) = %i", nb1, nb2, pgcd(nb1, nb2));
	}
	printf("\n");
	return (0);
}
