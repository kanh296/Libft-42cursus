#include "libft.h"

int	main(void)
{
	char str[] = "hahahahah";
	ft_bzero(str, 4);
	printf("after bzero: %s\n", str);
	ft_memset(str, 'a', 2);
	printf("after memset: %s\n", str); 
	return(0);
}

