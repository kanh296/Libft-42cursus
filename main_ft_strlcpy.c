#include "libft.h"
#include <string.h>

int	main()
{
	/*char	s[] = "aaaaa";
	char	d[] = "bbbbbbbbbbbb";
	char	d1[] = "bbbbbbbbbbbb";
	char	d2[] = "ccc";
	char	d3[] = "ccc";
	char	d4[] = "ddddddddddd";
	char	d5[] = "";
	char	d6[] = "";
	printf("d before: %s\n", d);
	printf("d1 before: %s\n", d1);
	printf("d2 before: %s\n", d2);//

	ft_strlcpy(d, s, 3);
	strlcpy(d1, s, 3);
	//ft_strlcpy(d2, s, 5);
	//strlcpy(d3, s, 5);
	ft_strlcpy(d4, s, 0);
	ft_strlcpy(d5, s, 4);
	strlcpy(d6, s, 4);
	printf("d after ft_strlcpy: %s\n", d);
	printf("d1 after strlcpy: %s\n", d1);
	//printf("d2 after ft_strlcpy: %s\n", d2);
	//printf("d3 after strlcpy: %s\n", d3);
	printf("dstsize 0 check: %s\n", d4);
	printf("dstlen = 0 check: %s\n", d5);
	printf("dstlen = 0 check: %s\n", d6);
	return (0);*/

	// check(ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0); showLeaks(); memset(dest, 'A', 10);
	char src[] = "coucou";
	char dest[10]; 
	memset(dest, 'A', 10);

	printf("strlen(src) = %lu\n", strlen(src));
	printf("ft_strlcpy(dest, src, 6) = %zu\n", ft_strlcpy(dest, src, 6));
	printf("memcmp(src,dest, 5): %d\n", memcmp(src,dest, 5));
	printf("char dest[5]: %c\n", dest[5]);
	system("leaks private-libft > leaks.txt");

	return (0);
}