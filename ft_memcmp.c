#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t i;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	i = 0;
	while(i < n)
	{
		if (c_s1[i] != c_s2[i])
		{
			return (c_s1[i] - c_s2[i]);
		}
		i++;
	}
	return (0);
}
