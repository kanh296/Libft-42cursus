#include "libft.h"

int	main(void)
{
	char str1[15] = "abcdef";
   	char str2[15] = "ABCDEF";
   	int ret;

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0)
	 {
      printf("str2 is less than str1");
	 }
 	else if(ret < 0)
	 {
      printf("str1 is less than str2");
  	 }
	 else
	 {
      printf("str1 is equal to str2");
   	}
   return(0);
}
