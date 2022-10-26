#include "libft.h"

int	main()
{
	char a[] = "happy birhtday pipi";

	printf("the last char is at: %s\n", ft_strrchr(a,'g'));
	printf("the original strrchr: %s\n", strrchr(a,'g'));
	return (0);
}

// Checked: null, \0, original