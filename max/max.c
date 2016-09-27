#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int				m;
	unsigned int	n;

	n = 0;
	m = 0;
	if (len > 0)
		m = tab[0];
	while (n < len)
	{
		if (m < tab[n])
			m = tab[n];
		n++;
	}
	return (m);
}

int main(void)
{
	int tab[100] = {9, 10, 45, 410, 20, -10, 550, 3214};

	printf("max=%i\n", max(tab, 8));
	return (0);
}
