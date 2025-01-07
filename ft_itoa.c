#include "libft.h"
#include <stdio.h>

int	calc(long n);

char	*ft_itoa(int n)
{
	char	*strn;
	int		len;
	long	nbr;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	len = calc(nbr);
	strn = (char *)malloc((len + 1) * sizeof(char));
	if (!strn)
		return (NULL);
	strn[len] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		len--;
		strn[len] = (nbr % 10 + '0');
		nbr = nbr / 10;
	}
	if (n < 0)
		strn[0] = '-';
	return (strn);
}

int	calc(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}
// int main()
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(-2));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(2147483649));
// }