#include "libft.h"

int	main(void)
{
	char	d[] = "aaaaaaaaaa";
	char	s[] = "aabbccddee";
	char	d1[] = "23455";
	char	s2[] = "12345";
	printf("before d: %s\nd1: %s\n", d, d1);
	ft_memmove(d, s + 2, 4);
	printf("after d: %s\n", d);
	return (0);
}
 
