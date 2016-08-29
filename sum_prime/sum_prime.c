// Exercice add les nombre premiers precedant celui passee en parametre.

#include <stdlib.h>
#include <stdio.h>

int		ft_is_prime(int prime)
{
	int n;
	
	n = 3;
	if (prime <= 2)
		return (0);
	else if ((prime % 2) == 0)
		return (0);
	else if (prime == 3)
	{
		printf("%i est un nbr premier\n", prime);
		return (3);
	}
	while (n <= 46340 && n < prime)
	{
		if ((prime % n) == 0)
			return (0);
		n += 2;
	}
	printf("%i est un nbr premier\n", prime);
	return (prime);
}

int		ft_sum_prev_prime(int prime)
{
	int tprime;
	int sum;

	tprime = 0;
	sum = 0;
	if (prime < 3)
		return (0);
	while (tprime <= prime)
	{
		sum += ft_is_prime(tprime);
		tprime++;
	}
	return (sum);
}


int		main(int ac, char **av)
{
	int n;

	n = 0;
	if (ac == 2)
	{
		n = atoi(av[1]);
		printf("somme des nbr premier precedant %i = %i\n", n, ft_sum_prev_prime(n));
	}
	return (0);
}
