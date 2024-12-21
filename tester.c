#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


int	main()
{
	void *a = ft_calloc(5, 1);
	printf("%saaa\n", (char*)a); // Saída esperada: INT_MIN (-2147483648)
	free(a);


	return 0;
}
