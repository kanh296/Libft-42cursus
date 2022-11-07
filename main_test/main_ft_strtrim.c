#include "libft.h"

int	main()
{
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	*s2 = "Hello \t  Please\n Trim me !";
	char	*t = " \n\t";

	printf("String after ft_strtrim: %s\n", ft_strtrim(s1, t));
	return (0);

}
