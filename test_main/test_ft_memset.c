#include "libft.h"

int	main(void)
{
	char str[] = "You can work this whatever function out absolutely!!!";
	char str1[] = "         ";
	char str2[3] = "aaa";
	printf("before memset: %s\n", str);
	ft_memset(str, 36, 7);
	ft_memset(str + 8, '.', 5);
	printf("After memset: %s\n ", str);
	printf("before memset: %s\n", str1);
	ft_memset(str1 + 2, 'k', 2);
	printf("After memset: %s\n ", str1);
	printf("before memset: %s\n", str2);
	ft_memset(str2, 'b', 14);
	printf("After memset: %s\n ", str2);
	return (0);
}
