#include "libft.h"

int	main()
{
	int a;

	a = 0;
	while (a < 300)
	{
		if (ft_isprint(a) != 0)
		{
			printf("%c", a);
			printf(" ");
		}
		a++;
	}
	return (0);
}
