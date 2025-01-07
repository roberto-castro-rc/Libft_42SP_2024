#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *res;

	if (count == 0 || size == 0)
	{
		return malloc(1); //verificar se esta correto e passa na mulinette
	}
	if (size > (size_t)-1 / count)
	{
		return (NULL);
	}

	res = (void *)malloc(count * size);

	if (!res)
	{
		return (NULL);
	}

	return (ft_memset(res, 0, (count * size)));

}
