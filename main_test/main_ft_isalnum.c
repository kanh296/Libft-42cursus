#include "libft.h"

int	main()
{
	int	a;
	
	a = 124;
	if (ft_isalnum(a) != 0)
		printf("a is an alpha/number");
	else
		printf("a is not an alpha/number");
	return (0);
}