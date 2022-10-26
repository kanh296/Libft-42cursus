#include "libft.h"
#include <ctype.h>

int	main()
{
	int	i;
	i = 'Z';

	printf("after toupper is: %c\n", ft_toupper(i));
	printf("the original: %c\n", toupper(i));
	printf("after ft_tolower is: %c\n", ft_tolower(i));
	printf("original tolower: %c\n", tolower(i));
	return (0);
}