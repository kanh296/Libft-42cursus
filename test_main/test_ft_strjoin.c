#include "libft.h"
char	*ft_strjoin2(char const *s1, char const *s2)
{
	size_t    i;
	size_t    j;
	char	*res;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
        return (NULL);
	res = (char *)(malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
          res[i] = s1[i];
          i++;
	}
     while (s2[j] != '\0')
	{
          res[i + j] = s2[j];
          j++;
	}
    res[i + j] = '\0';
	return (res);
}

int main(void)
{
	char str[] = "Mi is:";
	char str1[] = " the cutest cat.";
	char *str2 = NULL;
	printf("strjoin of str and str1 is: %s\n", ft_strjoin(str, str1));
	printf("NULL check: %s\n", ft_strjoin(str, str2));
	printf("strjoin2 of str and str1 is: %s\n", ft_strjoin2(str, str1));
	printf("NULL check 2: %s\n", ft_strjoin2(str, str2));
	return (0);
}

