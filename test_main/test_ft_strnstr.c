#include "libft.h"

int	main(void)
{
	char    s1[] = "get Libft done.";
	char    s2[] = "Libft";
    printf("The standard output: %s\n", strnstr(s1, s2, 5));
  	printf("The ft function output: %s\n", ft_strnstr(s1, s2, 5));
  	return (0);
}
