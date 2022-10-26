#include "libft.h"

int	main()
{
	char	s[] = "aaaaa";
	char	d[] = "bbbbbbbbbbbb";
	char	d1[] = "bbbbbbbbbbbb";
	char	d2[] = "ccc";
	char	d3[] = "ccc";
	char	d4[] = "ddddddddddd";
	char	d5[] = "";
	char	d6[] = "";
	/*printf("d before: %s\n", d);
	printf("d1 before: %s\n", d1);
	printf("d2 before: %s\n", d2);*/

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
	return (0);
}