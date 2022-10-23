#include "libft.h"

int	main(void)
{
	const char str[] = "Fact: Mi is the cutest cat";
   const char ch = 'F';
   char *ret;
	char *retft;

   ret = memchr(str, ch, strlen(str));
	retft = ft_memchr(str, ch, strlen(str));
   printf("Standard result: %s\n", ret);
	printf("ft result: %s\n", retft);
	return(0);
}
