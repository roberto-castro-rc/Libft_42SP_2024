#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char lstr[] = "you-";
	char bstr[] = "you need - to you-";
	printf("%s", ft_strnstr(bstr, lstr, 17));
	// printf("%s", ft_memchr(str, 'b', 5));
	return 0;
}
