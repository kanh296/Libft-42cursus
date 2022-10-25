#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int a);

int	main()
{
	int i = -2;
	/*int g = '1';
	int h = 47;
	int m = -2;*/
	if (ft_isalpha(i) == 0)
		printf("i is not an alpha");
	else
		printf("i is an alpha");
}
