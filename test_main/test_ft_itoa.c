#include "libft.h"

int	main(void)
{
	int n = -2147483648;
	int n1 = 1234;
	int n2 = 123;
	int n3 = -23547;
	int n4 = 10;
	printf("result n =: %s\n", ft_itoa(n));
	printf("result n =: %s\n", ft_itoa(n1));
	printf("result n =: %s\n", ft_itoa(n2)); 
	printf("result n =: %s\n", ft_itoa(n3));
	printf("result n =: %s\n", ft_itoa(n4));
	return (0);
}
