#include "libft.h"

int	main(void)
{
	char src[50] = "This is the test: copy";
	char dst[50] = "I hope that it works";
	char ft_src[50] = "This is the test: copy";
	char ft_dst[50] = "I hope that it works";

	printf("ft_memccpy result: %s\nmemccpy result: %s\n",
		(char *)ft_memccpy(ft_dst, ft_src, ':', 16),
		(char *)memccpy(dst, src, ':', 16));
	printf("dst : %s\n", dst);
	printf("ft_dst : %s\n", ft_dst);
	return (0);
}

