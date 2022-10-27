#include "libft.h"

int	main()
{
	char	s[] = "aaaa";
	char	d[50] = "bbbbb";
	char	d1[50] = "bbbbb";
	char	d2[] = "ccc";
	char	d3[] = "ccc";
	char	d4[] = "ddddddddddd";
	char	d5[] = "";
	char	d6[] = "";
	/*printf("d before: %s\n", d);
	printf("d1 before: %s\n", d1);
	printf("d2 before: %s\n", d2);*/

	ft_strlcat(d, s, 15);
	strlcat(d1, s, 15);
	//ft_strlcat(d2, s, 5);
	//strlcat(d3, s, 5);
	//ft_strlcat(d4, s, 0);
	//ft_strlcat(d5, s, 4);
	//strlcat(d6, s, 4);
	printf("d after ft_strlcat: %s\n", d);
	printf("d1 after strlcat: %s\n", d1);
	//printf("d2 after ft_strlcat: %s\n", d2);
	//printf("d3 after strlcat: %s\n", d3);
	//printf("dstsize 0 check: %s\n", d4);
	//printf("dstlen = 0 check: %s\n", d5);
	//printf("dstlen = 0 check: %s\n", d6);
	return (0);
}
