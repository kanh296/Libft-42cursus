#include "libft.h"

int	main()
{
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 5, size);

	printf("The substring is: %s\n", ret);
}
