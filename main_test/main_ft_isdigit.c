#include <stdio.h>
int	ft_isdigit(int c);

int	main()
{
	int a = '2';
	if (ft_isdigit(a) == 0)
		printf("a is not a digit");
	printf("a is a digit");
	return (0);
}
