#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
	unsigned char	*c_ptr;
	size_t	i;

	c_ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		c_ptr[i] = (unsigned char)c;
		i++;
	}

	return (s);
}
