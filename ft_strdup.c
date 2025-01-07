#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*copy_str;
	size_t	i;

	copy_str = (char *)malloc(ft_strlen(s1) + 1);
	if (!copy_str)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		copy_str[i] = s1[i];
		i++;
	}

	copy_str[i] = '\0';

	return (copy_str);
}