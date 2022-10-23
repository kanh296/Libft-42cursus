#include "libft.h"
int	main(void)
{
	const char a[] = "aaaaaaaa";
	const char b[] = "bbbbbbbbbb";
	printf("%d", ft_strncmp(a, b, 2));
	return (0);
}
