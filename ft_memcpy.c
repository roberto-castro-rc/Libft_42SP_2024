#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *c_dst;
	unsigned char *c_src;
	size_t i;

	if (dst == (void *)0 && src == (void *)0)
	{
		return (dst);
	}

	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	while (i<n)
	{
		c_dst[i] = c_src[i];
		i++;
	}

	return (dst);
}
