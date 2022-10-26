#include "libft.h"

int	main()
{
	char a[] = "gg";
	char b[] = "cc";
	int	ret;
	int ret_ft;
	ret = strncmp(a, b, 0);
	ret_ft = ft_strncmp(a, b, 0);
	printf("%d\n", ret);
	printf("%d\n", ret_ft);
	return (0);
}