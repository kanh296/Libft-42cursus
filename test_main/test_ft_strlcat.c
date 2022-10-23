#include "libft.h"

int	main(void)
{
	char s[] = "aaaaaaaaa";
	char d[] = "bbb";
	size_t a = ft_strlcat(d, s, 15);
	printf("d string after: %s\n", d);
	printf("buffer size: %zu\n", a);
	return (0);
}
