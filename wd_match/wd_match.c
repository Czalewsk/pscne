#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_match(char *str1, char *str2)
{
	int n;
	int m;

	n = 0;
	m = 0;
	while (str2[m])
	{
		if(str1[n] == '\0')
		{
			ft_putstr(str1);
			return ;
		}
		else if(str1[n] == str2[m])
			n++;
		m++;
	}
	if (str1[n] == '\0')
		ft_putstr(str1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_match(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
