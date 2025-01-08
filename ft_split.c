#include "libft.h"
#include <stdio.h>

static int	count_words(const char *str, char delimiter);
static void	*ft_free_split(char **matrix, int index);
static int	words_split(char **matrix, const char *s, char c, int index);

char	**ft_split(char const *s, char c)
{
	char			**matrix;
	size_t			i;

	if (!s)
		return (NULL);
	matrix = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!words_split(matrix, s, c, i))
				return (ft_free_split(matrix, i));
			while (*s && *s != c)
				s++;
			i++;
		}
		else
			s++;
	}
	matrix[i] = NULL;
	return (matrix);
}

static int	count_words(const char *str, char delimiter)
{
	size_t	i;
	int		count;
	int		in_word;

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

static int	words_split(char **matrix, const char *s, char c, int index)
{
	size_t	count;
	size_t	j;

	count = 0;
	j = 0;
	while (s[count] && s[count] != c)
	{
		count++;
	}
	matrix[index] = (char *)malloc((count + 1) * sizeof(char));
	if (!matrix[index])
		return (0);
	while (j < count)
	{
		matrix[index][j] = s[j];
		j++;
	}
	matrix[index][j] = '\0';
	return (1);
}

static void	*ft_free_split(char **matrix, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}
// int main(void)
// {
// 	char *str = "Olá mundo    ";
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