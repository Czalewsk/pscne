//

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *str, char s, char r)
{
	int n;

	n = 0;
	while (str[n])
	{
		if (str[n] == s)
			ft_putchar(r);
		else
			ft_putchar(str[n]);
		n++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] == '\0' && av[3][1] == '\0')
			ft_search_and_replace(av[1], av[2][0], av[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
