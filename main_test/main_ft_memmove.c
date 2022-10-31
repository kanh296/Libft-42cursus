#include "libft.h"

int	main()
{
	char s[] = "abcdef";
	char d[] = "abcdef";
	char d1[] = "bbbbbbbbbbbb";
	printf("d before memmove: %s\n", d);
	ft_memmove(s + 4, s + 1, 2);
	printf("s after ft_memmove: %s\n", s);
	memmove(d + 4, d + 1, 2);
	printf("d1 after memmove: %s\n", d);
}