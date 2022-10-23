#include "libft.h"

int	main(void)
{
	char c = 'a';
	char str[] = "Test test test";
	ft_putchar(c);
	ft_putchar('\n');
	ft_putstr(str);
	ft_putnbr(-296);
	ft_putendl(str);
	ft_putstr_fd("haha", 1);
	ft_putchar('\n');
	ft_putnbr_fd(296, 1);
	ft_putchar('\n');
	ft_putendl_fd("workin", 1);
	ft_putchar_fd('a', 1);
	return (0);
}
