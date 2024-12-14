#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
		char *c = "a";
	char d = 'c';
	char b = 'b';
	char a = 'a';
	char *str = "ssssssss";
	printf("%p\n", &b);
	printf("%p\n", &a);
	printf("%p\n%s\n", str, str);
	str = "pedro";
	printf("%p\n%s\n", str, str);
	//ft_memset(str, 'a', 3);
	//printf("isso um caracter %s", str);
	return 0;
}
