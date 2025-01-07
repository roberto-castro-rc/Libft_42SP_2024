#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	char	*c_ptr;
	size_t	i;

	c_ptr = (char *)s;
	i = 0;
	while(i < n)
	{
		c_ptr[i] = 0;
		i++;
	}
}
