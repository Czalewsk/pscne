//amelioration et respect des consignes

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_free(int echec)
{
	int test;
	int i;
	int j;

	j = 0;
	test = echec;
	while (test != 0)
	{
		test /= 10;
		j++;
	}
	i = j - 1;
	test = echec / 10;
	echec = echec % 10;
	while (test != 0)
	{
		if ((echec == (test % 10)) || (echec - (test % 10) == i - j)
			|| ((test % 10) - echec == i - j))
			return (0);
		else
		{
			test /= 10;
			i--;
		}
	}
	return (1);
}

void	ft_print_s(int echec)
{
	if (echec < 10)
		ft_putchar(echec % 10 + 48);
	else
	{
		ft_print_s(echec / 10);
		ft_putchar(echec % 10 + 48);
	}
}

void	ft_resolve_puzzle(int echec, int *w)
{
	while ((echec % 10) <= 8)
	{
		if (ft_is_free(echec) == 1)
		{
			if ((echec / 10000000) != 0)
			{
				w[0]++;
				ft_print_s(echec);
				ft_putchar('\n');
			}
			else
				ft_resolve_puzzle(((echec * 10) + 1), w);
		}
		echec++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int w[1];

	w[0] = 0;
	ft_resolve_puzzle(1, w);
	return (w[0]);
}

#include <stdio.h>

int		main(void)
{
	printf("le nbr de solution est %i\n", ft_eight_queens_puzzle());
	return (0);
}
