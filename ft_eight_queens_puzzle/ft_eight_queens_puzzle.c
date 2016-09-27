#include <stdio.h>

int		ft_is_on_diag(int l, int c, char echec[8][8])
{
	int c_test;
	int l_test;

	c_test = c;
	l_test = l;
	while (c_test >= 0 && l_test >= 0)
	{
		if (echec[l_test][c_test] == 'D')
			return (0);
		l_test--;
		c_test--;
	}
	c_test = c;
	l_test = l;
	while (c_test >= 0 && l <= 7)
	{
		if (echec[l_test][c_test] == 'D')
			return (0);
		l_test++;
		c_test--;
	}
	return (1);
}

int		ft_is_on_row(int l, int c, char echec[8][8])
{
	int c_test;

	c_test = c;
	while (c_test >= 0)
	{
		if (echec[l][c_test] == 'D')
			return (0);
		c_test--;
	}
	return (1);
}

void	ft_print_tab(char echec[8][8])
{
	int c_print;
	int l_print;

	c_print = 0;
	l_print = 0;
	while (l_print < 8)
	{
		while (c_print < 8)
		{
			printf("%c", echec[l_print][c_print]);
			c_print++;
			printf(" ");
		}
		c_print = 0;
		l_print++;
		printf("\n");
	}
}

void	ft_put_queens(int c, char echec[8][8], int *cpt)
{
	int l;

	l = 0;
	while (l < 8)
	{
		if (ft_is_on_row(l, c, echec) == 1 && 
			ft_is_on_diag(l, c, echec) == 1)
		{
			echec[l][c] = 'D';
			if ((c + 1) == 8)
			{
				cpt[0]++;
				printf("\nSolution n° %i\n", cpt[0]);
				ft_print_tab(echec);
				echec[l][c] = '.';
				l++;
			}
			else
				ft_put_queens(c + 1, echec, cpt);
		}
		echec[l][c] = '.';
		l++;
	}
}

int		main(void)
{
	int c;
	int cpt[1];
	char echec[8][8] = { 
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.'},
	};

	c = 0;
	cpt[0] = 0;
	ft_put_queens(c, echec, cpt);
	return (0);
}
