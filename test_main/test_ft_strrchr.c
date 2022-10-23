#include "libft.h"

int	main(void)
{
	char s[] = "the cutest cat on Earth is: Mi";
	printf("the standard function: %s\n", strrchr(s, 'A'));
	printf("the ft function: %s\n", ft_strrchr(s, 'A'));
	return (0);
}

