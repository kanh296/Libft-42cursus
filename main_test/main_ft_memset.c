#include "libft.h"

int	main()
{
	char	str[20] = "aaaaaaaaaaaa";
	printf("before memset: %s", str);
	printf("   \n");
	printf("after memset: %s", ft_memset(str + 3, '@', 4));
	printf("the original memset: %s", ft_memset(str + 3, '@', 4));
	return (0);
}