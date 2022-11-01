#include "libft.h"

int	main()
{
	/*char a[] = "happy birhtday pipi";

	printf("the last char is at: %s\n", ft_strrchr(a, 0));
	printf("the original strrchr: %s\n", strrchr(a, 0));
	return (0);*/

	char *src = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');

	printf("the last char is at: %s\n", d1);
	printf("the original strrchr: %s\n", d2);
	return (0);
}

// Checked: null, \0, original