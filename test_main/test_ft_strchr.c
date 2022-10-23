#include "libft.h"

int	main(void)
{
	const char s[] = "The cutest cat on Earth: Mi";
	char *res;
	res = ft_strchr(s, ':');
	printf("%s\n", res);
	printf("In case not found: %s\n", ft_strchr(s, 'd'));
	printf("In case not found standard: %s\n", strchr(s, 'd'));
	printf("In case found: %s\n", ft_strchr(s, 'E'));
	return (0);
}
