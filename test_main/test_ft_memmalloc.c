#include "libft.h"

int	main()
{
	char *s;
	void	*res;
	res =(char *) ft_memmalloc(5* sizeof(char));
	printf("%d\n", res);

	printf("%d\n", &s);
	return (0);
} 
