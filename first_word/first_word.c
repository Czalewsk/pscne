#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int n;
	int w;

	w = 0;
	n = 0;
	while (str[n])
	{
		if ((str[n]) != 32 && str[n] != '\t')
		{
			ft_putchar(str[n]);
			w = 1;
		}
		else if (w == 1)
			return ;
		n++;
	}
}

int		main (int ac, char **av)
{
	if (ac == 2)
		ft_first_word(av[1]);
	ft_putchar('\n');
	return (0);
}
