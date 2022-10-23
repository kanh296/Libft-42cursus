#include "libft.h"

int	main(void)
{
	int c = '0';

	printf("If c is an alpha: %d\n", ft_isalpha(c));
	printf("If c is a digit: %d\n", ft_isdigit(c));
	printf("If c is a alphanumeric: %d\n", ft_isalnum(c));
	printf("If c is a ASCII: %d\n", ft_isascii(c));
	printf("If c is printable: %d\n", ft_isprint(c));
	return (0);
}
