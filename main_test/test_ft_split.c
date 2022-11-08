#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	num_words = count;
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	int	id;
	unsigned int	word;
	int	word_len;

	id = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[id] != '\0' && s[id] == c)
			id++;
		while (s[id] != '\0' && s[id] != c)
		{
			id++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		int	j;

		j = 0;
		while (word_len > 0)
		{
			s2[word][j] = s[id - word_len];
			j++;
			word_len--;
		}
		s2[word][j] = '\0';
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

/*int	main()
{
	char s1[] = "an array of strings obtained by splitting s using the character c as a delimiter.";
	char s2[] = "an array of strings obtained by splitting s using the character c as a delimiter.";

	char	**ret1;
	char	**ret2;

	ret1 = ft_split(s1, ' ');
	ret2 = ft_split(s2, ' ');
	printf("s1 split result: %s\n", *ret1);
	printf("s2 split result: %s\n", *ret2);
	printf("strcmp re1 vs ret2: %d\n", strcmp(*ret1, *ret2));
	return (0);
}*/