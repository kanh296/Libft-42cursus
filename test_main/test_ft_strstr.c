#include "libft.h"

int	main(void)
{
	char	s1[] = "All I want for Christmas is to get Libft done.";
	char	s2[] = ""; 
	printf("The standard output: %s\n", strstr(s1, s2));
	printf("The ft function output: %s\n", ft_strstr(s1, s2));
	return (0);
}
