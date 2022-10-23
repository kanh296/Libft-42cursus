#include "libft.h"

int	main(void)
{
	const char s1[] = "0123";
	const char s2[] = "-5555";
	const char s3[] = "05 + 06";
	const char s4[] = "5678909876543";
	const char s5[] = "-99999999999999999";
	const char s6[] = " 		1111";

	printf("%d \n", ft_atoi(s1));
	printf("%d \n", ft_atoi(s2));
	printf("%d \n", ft_atoi(s3));
	printf("%d \n", ft_atoi(s4));
	printf("%d \n", ft_atoi(s5));
	printf("%d \n", ft_atoi(s6));
	return (0);
}
