#include "libft.h"
#include <stdio.h>

unsigned int	count_words(const char *str, char delimiter);
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**matrix;
	unsigned int	in_word;
	unsigned int	count;

	if (!s)
		return (NULL);

	matrix = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);


	i = 0;
	in_word = 0;
	j = 0;
	count = 0;
	while(*s)
	{
		if (*s != c)
		{
			in_word = 1;
			if (count == 0)
			{
				while (s[count] && s[count] != c)
				{
					count++;
				}
				matrix[i] = (char *)malloc((count + 1) * sizeof(char));
			}
			matrix[i][j] = *s;
			j++;
			if (j == count)
				matrix[i][j] = '\0';
		}
		if ((*s == c || *(s + 1) == '\0') && in_word == 1)
		{
			count = 0;
			in_word = 0;
			j = 0;
			i++;
			//printf("%s", matrix[i]);
		}

		s++;
	}
	matrix[i] = NULL;
	return (matrix);
}

unsigned int	count_words(const char *str, char delimiter)
{
	size_t i;
	unsigned int count;
	unsigned int in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != delimiter && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == delimiter)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}



// int main(void)
// {
// 	char *str = "Olá mundo";
// 	char delimiter = ' ';
// 	char **matrix = ft_split(str, delimiter);
// 	size_t i;

// 	i = 0;
// 	while (matrix[i])
// 	{
// 		printf("%s\n", matrix[i]);
// 		i++;
// 	}
// 	return (0);
// }