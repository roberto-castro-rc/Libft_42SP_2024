#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_s;
	size_t	i;

	c_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if(c_s[i] == (unsigned char)c)
		{
			return((void *)c_s+i);
		}
		i++;
	}
	return (NULL);
}
