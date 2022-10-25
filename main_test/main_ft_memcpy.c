#include "libft.h"

int	main()
{
	char s[] = "aaaaaaaaaaaa";
	char d[] = "bbbbbbbbbbbb";
	char d1[] = "bbbbbbbbbbbb";
	printf("d before memcpy: %s\n", d);
	ft_memcpy(d, s, 4);
	printf("d after memcpy: %s\n", d);
	ft_memcpy(d1, s, 4);
	printf("d1 after memcpy: %s\n", d1);
}