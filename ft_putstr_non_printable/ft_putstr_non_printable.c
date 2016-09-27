#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex_no_printable(char c)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			ft_put_hex_no_printable(*str);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	ft_putstr_non_printable("coucou\177tu vas bien ?\t");
	return (0);
}
