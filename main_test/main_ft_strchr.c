#include "libft.h"
#include <string.h>

int	main()
{
	char	a[] = "Hello . abcd . dcddd";
	char *b;
	b = a;
	printf("%s\n", b);
	printf("The first |.| is at: %s\n", ft_strchr(a, 'd'));
	printf("the original strchr: %s\n", strchr(a,'d'));
	return (0);
}
/* check: null, '\0', original*/