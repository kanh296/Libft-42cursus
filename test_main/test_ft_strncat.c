#include "libft.h"

int	main(void)
{
	 char	d[100] = "giua dai lo dong tay co";
	char	s[] = " minh cam doi tay.";
	printf("original: %s\n", d);
	printf("ft function: %s\n", ft_strncat(d, s, 55));
	printf("standard function: %s\n", strncat(d, s, 13));
	return (0);
}
 
