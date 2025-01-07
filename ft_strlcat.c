#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
	{
		return (srclen + dstlen);
	}

	i = 0;
	while ((src[i] != '\0') && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}

	dst[dstlen + i] = '\0';

	return (srclen + dstlen);
}
