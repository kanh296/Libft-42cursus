#include "libft.h"

int	main()
{
	char src[] = "I'm going crazy with libft TT.TT";
	//char *t;
	//char *h;

	char *t = ft_memchr(src, 'd', 20);
	char *h = memchr(src, 'd', 20);

	printf("ft_memchr result: %s\n", t);
	printf("original function result: %s\n", h);
	return (0);
}