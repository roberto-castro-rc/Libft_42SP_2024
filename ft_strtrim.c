#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	j = ft_strlen(s1);
	while (j > 0)
	{
		if (!ft_strchr(set, s1[j - 1]))
			break ;
		j--;
	}
	return (ft_substr(s1, i, j - i));
}
