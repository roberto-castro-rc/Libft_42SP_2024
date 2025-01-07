#include "libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	sizesrc;
	size_t	i;

	sizesrc = ft_strlen(src);
	if (dstsize == 0)
	{
		return (sizesrc);
	}

	i = 0;
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	
	dst[i] = '\0';
	return (sizesrc);
}
