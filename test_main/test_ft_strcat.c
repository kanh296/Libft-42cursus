#include "libft.h"

int	main(void)
{
	char	d[100] = "Everthing is under control.";
	printf("original: %s\n", d);
	char	s[] = "You can do it.";
	printf("Using standard strcat: %s\n", strcat(d, s));
	printf("The Locus Rule: %s\n", ft_strcat(d, s));
	return (0);
}

