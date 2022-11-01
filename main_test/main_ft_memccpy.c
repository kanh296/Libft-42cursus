#include "libft.h"

int	main()
{
	char s[] = "1a34567";
	char d[] = "bbbabb";
	char d1[] = "bbbabb";
	printf("d before memccpy: %s\n", d);
	ft_memccpy(d, s, 'a', 4);
	printf("d after memccpy: %s\n", d);
	ft_memccpy(d1, s, 'a', 4);
	printf("d1 after memccpy: %s\n", d1);
}