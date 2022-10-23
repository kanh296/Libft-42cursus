#include "libft.h"

void	f(unsigned int a, char *s)
{
	size_t	i;

	i = 0;
	while ((i <= a) && (s[i] != '\0'))
	{
		s[i] = 'A';
		i++;
	}
}

int	main(void)
{
	char str[] = "aaaaaa";
	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
}
