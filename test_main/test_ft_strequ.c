#include "libft.h"

int	strequ(char const *s1, char const *s2)
{
	return (ft_strcmp(s1, s2) ? 0 : 1);
}

int	main(void)
{
	char a1[] = "abcd";
	char b1[] = "zxym";
	//printf("%d\n", ft_strcmp(a1, b1));
	printf("%d\n", ft_strnequ(a1, b1, 0));
	printf("%d\n", ft_strncmp(a1, b1, 4));
	//printf("standard: %d\n", strequ(a1, b1));
	//printf("ft function: %d\n", ft_strequ(a1, b1));
	return (0);
}
