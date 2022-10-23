#include "libft.h"

void	f(char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		c[i] = '0';
		i++;
	}
}

int	main(void)
{
	//char str[] = "hello my name is";
	char str1[] = "";
	ft_striter(str1, f);
	printf("%s\n", str1);
	return (0);
}
