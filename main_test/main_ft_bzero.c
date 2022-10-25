#include "libft.h"
#include <string.h>

int	main()
{
	char str[] = "aaaaaaaaaaaa";
	printf("before bzero: %s", str);
	printf("   \n");
	ft_bzero(str, 4);
	printf("after ft_bzero: %s", str);
	printf("   \n");
	char	str1[] = "aaaaaaaaaaaa";
	bzero(str1, 4);
	printf("the original bzero: %s", str1);
	return (0);
}